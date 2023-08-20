#include "main.h"

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
	int count = 0, i, j, character_count;

	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1])
			{
				for (j = 0; formats[j].x; j++)
				{
					if (format[i + 1] == formats[j].x)
					{
					character_count = formats[j].print_func(*arg);
					if (character_count == -1)
						return (-1);
					count += character_count;
					break;
					}
				}
				if (!formats[j].x)
				{
					_putchar('%');
					_putchar(format[i + 1]);
					count += 2;
				}
				i++;
			}
			else
			{
				_putchar('%');
				count++;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	return (count);
}

