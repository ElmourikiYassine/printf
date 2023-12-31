#include "main.h"

/**
 * format_analyzer_to_buffer - Analyzes and processes formatted string
 * @format: The format string to analyze
 * @formats: Array of format_args structures
 * @arg: Pointer to va_list containing arguments
 * @buffer: The buffer to store the characters
 * @buffer_index: Pointer to the buffer index
 *
 * Return: The total number of characters printed
 */
int format_analyzer_to_buffer(const char *format, format_args *formats,
	va_list *arg, char *buffer, int *buffer_index)
{
	int count = 0, i, j, character_count;
	int found = 0;

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
			{
				if (format[i + 1] == ' ')
				{
					return (-1);
				}
				if (format[i + 1] == '%')
				{
					buffer[(*buffer_index)++] = '%';
					count++;
				}
				else if (format[i + 1] == '\n')
				{
					buffer[(*buffer_index)++] = '%';
					buffer[(*buffer_index)++] = '\n';
					count += 2;
				}
				else
				{
					found = 0;
					for (j = 0; formats[j].x != '\0'; j++)
					{
					if (format[i + 1] == formats[j].x)
					{
					character_count = formats[j].print_func(*arg, buffer, buffer_index);
					if (character_count == -1)
					{
						return (-1);
					}
					count += character_count;
					found = 1;
					break;
					}
					}
					if (!found)
					{
						buffer[(*buffer_index)++] = '%';
						count++;
						buffer[(*buffer_index)++] = format[i + 1];
						count++;
					}
				}
				i++;
			}
			else
			{
				return (-1);
			}
		}
		else
		{
			buffer[(*buffer_index)++] = format[i];
			count++;
		}
	}
	return (count);
}

