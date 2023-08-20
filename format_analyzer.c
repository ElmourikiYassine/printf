#include "main.h"

/**
 * process_formatSpecifier - Analyzes and processes a single format specifier
 * @format: The format string
 * @formats: Array of format_args structures
 * @arg: Pointer to va_list containing arguments
 *
 * Return: The total number of characters printed
 */
int process_formatSpecifier(const char *format, format_args *formats,
		va_list *arg)
{
	int count = 0;
	char next_char;
	char *next_string;
	int next_int;
	int next_dec;
	int j;

	if (format[1] == '\0' || (format[1] != 'c' && format[1] != 's'
		&& format[1] != 'd'
		&& format[1] != 'i')
		|| !is_char(format[1]))
		return (-1);
	for (j = 0; formats[j].x != '\0'; j++)
	{
		if (format[1] == formats[j].x)
		{
			if (format[1] == 'c')
			{
				next_char = (char)va_arg(*arg, int);
				count = formats[j].print_func(&next_char);
			}
			else if (format[1] == 's')
			{
				next_string = va_arg(*arg, char *);
				count = formats[j].print_func(next_string);
			}
			else if (format[1] == 'd')
			{
				next_dec = va_arg(*arg, int);
				count = formats[j].print_func(&next_dec);
			}
			else if (format[1] == 'i')
			{
				next_int = va_arg(*arg, int);
				count = formats[j].print_func(&next_int);
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
		if (format[i] == '%')
		{
			count += process_formatSpecifier(&format[i], formats, arg);
			i++;
			if (format[i] == ' ')
			{
				return (-1);
			}
		}
		else
		{
			if (format[i] == '\n')
			{
				_putchar('\n');
			}
			else
			{
				_putchar(format[i]);
			}
			count++;
		}
	}

	return (count);
}

