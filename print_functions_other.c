#include "main.h"

/**
 * printf_binary - Print an unsigned integer in binary format
 * @binary: Pointer to the unsigned integer to be printed
 * @buffer: The buffer to store the characters
 * @buffer_index: Pointer to the buffer index
 *
 * Return: Number of characters printed
 */
int printf_binary(va_list binary, char *buffer, int *buffer_index)
{
	unsigned int num = va_arg(binary, unsigned int);

	return (print_base_number_to_buffer(num, 2, '0', buffer, buffer_index));
}

/**
 * printf_percent - Print a percent character
 * @percent: Argument list (unused)
 * @buffer: The buffer to store the characters
 * @buffer_index: Pointer to the buffer index
 *
 * Return: Always 1
 */
int printf_percent(__attribute__((unused)) va_list percent,
		char *buffer, int *buffer_index)
{
	buffer[(*buffer_index)++] = '%';
	return (1);
}

/**
 * print_unsigned_number_to_buffer - Print an unsigned
 * integer as individual digits
 * @num: The unsigned integer to be printed
 * @buffer: The buffer to store the characters
 * @buffer_index: Pointer to the buffer index
 *
 * Return: Number of characters printed
 */
int print_unsigned_number_to_buffer(unsigned int num,
		char *buffer, int *buffer_index)
{
	int count = 0;
	int num_digits = 0;
	unsigned int temp = num;

	if (num == 0)
	{
		buffer[(*buffer_index)++] = '0';
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

		buffer[(*buffer_index)++] = '0' + digit;
		count++;
		num_digits--;
	}

	return (count);
}

/**
 * printf_unsigned - Print an unsigned integer
 * and return the count of characters printed
 * @unsigned_int: Pointer to the unsigned integer to be printed
 * @buffer: The buffer to store the characters
 * @buffer_index: Pointer to the buffer index
 *
 * Return: Number of characters printed
 */
int printf_unsigned(va_list unsigned_int, char *buffer, int *buffer_index)
{
	unsigned int num = va_arg(unsigned_int, unsigned int);

	return (print_unsigned_number_to_buffer(num, buffer, buffer_index));
}

/**
 * printf_octal - Print an unsigned integer in octal format
 * @octal: Pointer to the unsigned integer to be printed
 * @buffer: The buffer to store the characters
 * @buffer_index: Pointer to the buffer index
 *
 * Return: Number of characters printed
 */
int printf_octal(va_list octal, char *buffer, int *buffer_index)
{
	unsigned int num = va_arg(octal, unsigned int);

	return (print_base_number_to_buffer(num, 8, '0', buffer, buffer_index));
}

