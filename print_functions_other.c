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

