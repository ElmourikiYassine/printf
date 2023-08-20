#include "main.h"

/**
 * printf_binary - Print an unsigned integer in binary format
 * @binary: Pointer to the unsigned integer to be printed
 *
 * Return: Number of characters printed
 */
int printf_binary(va_list binary)
{
	unsigned int num = va_arg(binary, unsigned int);

	return (print_base_number(num, 2, '0'));
}

/**
 * printf_percent - Print a percent character
 * @percent: Argument list (unused)
 * Return: Always 1
 */
int printf_percent(__attribute__((unused)) va_list percent)
{
	_putchar('%');
	return (1);
}

/**
 * print_unsigned_number - Print an unsigned integer as individual digits
 * @num: The unsigned integer to be printed
 *
 * Return: Number of characters printed
 */
int print_unsigned_number(unsigned int num)
{
	int count = 0;
	int num_digits = 0;
	unsigned int temp = num;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (temp != 0)
	{
		temp /= 10;
		num_digits++;
	}

	while (num_digits > 0)
	{
		int digit = (num / power(10, num_digits - 1)) % 10;

		_putchar('0' + digit);
		count++;
		num_digits--;
	}

	return (count);
}

/**
 * printf_unsigned - Print an unsigned integer and
 * return the count of characters printed
 * @unsigned_int: Pointer to the unsigned integer to be printed
 *
 * Return: Number of characters printed
 */
int printf_unsigned(va_list unsigned_int)
{
	unsigned int num = va_arg(unsigned_int, unsigned int);

	return (print_unsigned_number(num));
}

/**
 * printf_octal - Print an unsigned integer in octal format
 * @octal: Pointer to the unsigned integer to be printed
 *
 * Return: Number of characters printed
 */
int printf_octal(va_list octal)
{
	unsigned int num = va_arg(octal, unsigned int);

	return (print_base_number(num, 8, '0'));
}

