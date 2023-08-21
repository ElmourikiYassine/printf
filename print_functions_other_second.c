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
int printf_hex_upper(va_list hex_upper,
		char *buffer, int *buffer_index)
{
	unsigned int num = va_arg(hex_upper, unsigned int);

	return (print_base_number_to_buffer(num, 16, 'A', buffer, buffer_index));
}

