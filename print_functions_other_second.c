#include "main.h"

/**
 * printf_hex_lower - Print an unsigned
 * integer in lowercase hexadecimal format
 * @hex_lower: Pointer to the unsigned integer to be printed
 * @buffer: The buffer to store the characters
 * @buffer_index: Pointer to the buffer index
 *
 * Return: Number of characters printed
 */
int printf_hex_lower(va_list hex_lower, char *buffer, int *buffer_index)
{
	unsigned int num = va_arg(hex_lower, unsigned int);

	return (print_base_number_to_buffer(num, 16, 'a', buffer, buffer_index));
}

/**
 * printf_hex_upper - Print an unsigned integer
 * in uppercase hexadecimal format
 * @hex_upper: Pointer to the unsigned integer to be printed
 * @buffer: The buffer to store the characters
 * @buffer_index: Pointer to the buffer index
 *
 * Return: Number of characters printed
 */
<<<<<<< HEAD
int printf_hex_upper(va_list hex_upper, char *buffer, int *buffer_index)
=======
int printf_hex_upper(va_list hex_upper,
		char *buffer, int *buffer_index)
>>>>>>> 660707b410444e3adad29c8dc93aeec90d07370f
{
	unsigned int num = va_arg(hex_upper, unsigned int);

	return (print_base_number_to_buffer(num, 16, 'A', buffer, buffer_index));
<<<<<<< HEAD
}

/**
 * printf_string_with_non_printable - Print a string with non-printable characters escaped
 * @s: Pointer to the string to be printed
 * @buffer: The buffer to store the characters
 * @buffer_index: Pointer to the buffer index
 *
 * Return: Number of characters printed
 */
int printf_string_with_non_printable(va_list s, char *buffer, int *buffer_index)
{
	int i;
	char *string = va_arg(s, char *);
	int length = _strlen(string);
	int count = 0;

	for (i = 0; i < length; i++)
	{
		if (string[i] < 32 || string[i] >= 127)
		{
			buffer[(*buffer_index)++] = '\\';
			buffer[(*buffer_index)++] = 'x';
			buffer[(*buffer_index)++] = (string[i] >> 4) + '0';
			buffer[(*buffer_index)++] = (string[i] & 0xF) + '0';
			count += 4;
		}
		else
		{
			buffer[(*buffer_index)++] = string[i];
			count++;
		}
	}

	return (count);
=======
>>>>>>> 660707b410444e3adad29c8dc93aeec90d07370f
}

