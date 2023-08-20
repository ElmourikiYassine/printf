#include "main.h"

/**
 * printf_char - Prints a character and returns the count of characters printed
 * @c: Pointer to the character to be printed
 *
 * Return: Number of characters printed
 */
int printf_char(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}

/**
 * printf_string - Prints a string and returns the count of characters printed
 * @s: Pointer to the string to be printed
 *
 * Return: Number of characters printed
 */
int printf_string(va_list s)
{
	int i;
	char *string = va_arg(s, char *);
	int length = _strlen(string);

	for (i = 0; i < length; i++)
		_putchar(string[i]);

	return (length);
}


/**
 * print_number - Print an integer as individual digits
 * @num: The integer to be printed
 *
 * Return: Number of characters printed
 */
int print_number(int num)
{
	int count = 0;
	int num_digits = 0;
	int temp = num;

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
 * printf_int - Print an integer and return the count of characters printed
 * @integer: Pointer to the integer to be printed
 *
 * Return: Number of characters printed
 */
int printf_int(va_list integer)
{
	int num = va_arg(integer, int);
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		count++;
	}
	if (num == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}

	count += print_number(num);
	return (count);
}

/**
 * print_base_number - Print a number in a specified base
 * @num: The number to be printed
 * @base: The base for printing
 * @case_flag: Flag for uppercase or lowercase letters in hexadecimal
 *
 * Return: Number of characters printed
 */
int print_base_number(unsigned int num, int base, char case_flag)
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
		temp /= base;
		num_digits++;
	}

	while (num_digits > 0)
	{
		int digit = (num / power(base, num_digits - 1)) % base;

		_putchar((digit < 10) ? ('0' + digit) : (case_flag + digit - 10));
		count++;
		num_digits--;
	}

	return (count);
}

