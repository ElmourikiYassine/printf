#include "main.h"

/**
 * _printf - Custom printf function
 * @format: The format string
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int count = 0;

	format_args formats[] = {
		{'c', printf_char},
		{'s', printf_string},
		{'d', printf_int},
		{'i', printf_int},
		{'b', printf_binary},
		{'%', printf_percent},
		{'u', printf_unsigned},
		{'o', printf_octal},
		{'x', printf_hex_lower},
		{'X', printf_hex_upper},
		{'\0', NULL}
	};

	if (!format)
		return (-1);

	va_start(arg, format);

	count = format_analyzer(format, formats, &arg);
	va_end(arg);

	/* printf("the count is : %d\n", count); */
	return (count);
}
