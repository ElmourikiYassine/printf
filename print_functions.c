#include "main.h"

/**
 * printf_char - Prints a character and
 * returns the count of characters printed
 * @c: Pointer to the character to be printed
 * @buffer: The buffer to store the characters
 * @buffer_index: Pointer to the buffer index
 *
 * Return: Number of characters printed
 */
int printf_char(va_list c, char *buffer, int *buffer_index)
{
	char character = va_arg(c, int);

	buffer[(*buffer_index)++] = character;
	return (1);
}

/**
 * printf_string - Prints a string and
 * returns the count of characters printed
 * @s: Pointer to the string to be printed
 * @buffer: The buffer to store the characters
 * @buffer_index: Pointer to the buffer index
 *
 * Return: Number of characters printed
 */
int printf_string(va_list s, char *buffer, int *buffer_index)
{
	int i;
	char *string = va_arg(s, char *);
	int length = _strlen(string);

	for (i = 0; i < length; i++)
	{
		buffer[(*buffer_index)++] = string[i];
	}

	return (length);
}

/**
 * print_number_to_buffer - Print an
 * integer as individual digits to buffer
 * @num: The integer to be printed
 * @buffer: The buffer to store the characters
 * @buffer_index: Pointer to the buffer index
 *
 * Return: Number of characters printed
 */
int print_number_to_buffer(int num, char *buffer, int *buffer_index)
{
	int count = 0;
	int num_digits = 0;
	int temp = num;

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
 * printf_int - Print an integer and return the count of characters printed
 * @integer: Pointer to the integer to be printed
 * @buffer: The buffer to store the characters
 * @buffer_index: Pointer to the buffer index
 *
 * Return: Number of characters printed
 */
int printf_int(va_list integer, char *buffer, int *buffer_index)
{
	int num = va_arg(integer, int);
	int count = 0;

	if (num < 0)
	{
		buffer[(*buffer_index)++] = '-';
		num = -num;
		count++;
	}
	if (num == 0)
	{
		buffer[(*buffer_index)++] = '0';
		count++;
		return (count);
	}

	count += print_number_to_buffer(num, buffer, buffer_index);
	return (count);
}

/**
 * print_base_number_to_buffer - Print a number in a
 * specified base to the buffer
 * @num: The number to be printed
 * @base: The base for printing
 * @case_flag: Flag for uppercase or lowercase letters in hexadecimal
 * @buffer: The buffer to store the characters
 * @buffer_index: Pointer to the buffer index
 *
 * Return: Number of characters printed
 */
int print_base_number_to_buffer(unsigned int num, int base,
		char case_flag, char *buffer, int *buffer_index)
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
		temp /= base;
		num_digits++;
	}

	while (num_digits > 0)
	{
		int digit = (num / power(base, num_digits - 1)) % base;

		buffer[(*buffer_index)++] = (digit < 10)
			? ('0' + digit)
			: (case_flag + digit - 10);
		count++;
		num_digits--;
	}

	return (count);
}

