#include "main.h"

/**
 * printf_hex_lower - Print an unsigned integer in lowercase hexadecimal format
 * @hex_lower: Pointer to the unsigned integer to be printed
 *
 * Return: Number of characters printed
 */
int printf_hex_lower(va_list hex_lower)
{
	unsigned int num = va_arg(hex_lower, unsigned int);

	return (print_base_number(num, 16, 'a'));
}

/**
 * printf_hex_upper - Print an unsigned integer in uppercase hexadecimal format
 * @hex_upper: Pointer to the unsigned integer to be printed
 *
 * Return: Number of characters printed
 */
int printf_hex_upper(va_list hex_upper)
{
	unsigned int num = va_arg(hex_upper, unsigned int);

	return (print_base_number(num, 16, 'A'));
}
