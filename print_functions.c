#include "main.h"

/**
 * printf_char - Prints a character and returns the count of characters printed
 * @c: Pointer to the character to be printed
 *
 * Return: Number of characters printed
 */
int printf_char(void *c)
{
	char charpointer = *(char *)c;
	int length = _strlen((char *)c);

	_putchar(charpointer);

	return (length + 1);
}

/**
 * printf_string - Prints a string and returns the count of characters printed
 * @s: Pointer to the string to be printed
 *
 * Return: Number of characters printed
 */
int printf_string(void *s)
{
	int i;
	char *string = (char *)s;
	int length = _strlen(string);

	for (i = 0; i < length; i++)
		_putchar(string[i]);

	return (length + 1);
}

/**
 * printf_int - Print an integer and return the count of characters printed
 * @integer: Pointer to the integer to be printed
 *
 * Return: Number of characters printed
 */
int printf_int(void *integer)
{
	int num = *(int *)integer;
	int i;
	int count = 0;
	char buffer[12];
	int length = 0;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}
	if (num == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}
	while (num > 0)
	{
		buffer[length++] = '0' + (num % 10);
		num /= 10;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(buffer[i]);
		count++;
	}
	return (count);
}

