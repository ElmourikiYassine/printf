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
		{'\0', NULL}
	};

	va_start(arg, format);

	count = format_analyzer(format, formats, &arg);
	va_end(arg);

	/* printf("the count is : %d\n", count); */
	return (count);
}

