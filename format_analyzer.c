#include "main.h"

/**
 * process_formatSpecifier - Analyzes and processes a single format specifier
 * @format: The format string
 * @formats: Array of format_args structures
 * @arg: Pointer to va_list containing arguments
 *
 * Return: The total number of characters printed
 */
int process_formatSpecifier(const char *format,
			format_args *formats,
			va_list *arg)
{
	int count = 0;
	char next_char;
	char *next_string;
	int next_int;
	int next_dec;
	int j;

	for (j = 0; formats[j].x != '\0'; j++)
	{
		if (format[1] == formats[j].x)
		{
			if (format[1] == 'c')
			{
				next_char = va_arg(*arg, int);
				count += formats[j].print_func(&next_char);
			}
			if (format[1] == 's')
			{
				next_string = va_arg(*arg, char *);
				count += formats[j].print_func(next_string);
			}
			if (format[1] == 'd')
			{
				next_dec = va_arg(*arg, int);
				count += formats[j].print_func(&next_dec);
			}
			if (format[1] == 'i')
			{
				next_int = va_arg(*arg, int);
				count += formats[j].print_func(&next_int);
			}
		}
	}

	return (count);
}

/**
 * format_analyzer - Analyzes and processes formatted string
 * @format: The format string to analyze
 * @formats: Array of format_args structures
 * @arg: Pointer to va_list containing arguments
 *
 * Return: The total number of characters printed
 */
int format_analyzer(const char *format, format_args *formats, va_list *arg)
{
	int count = 0;
	int i;

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] == '\n')
		{
			putchar('\n');
			count++;
		}

		if (format[i] == '%' && format[i + 1] != '\0')
		{
			count += process_formatSpecifier(&format[i], formats, arg);
			i++;
		}
	}

	return (count);
}


