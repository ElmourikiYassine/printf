#include "./../main.h"

/**
 * precision_parser - Calculates the precision for printing
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: Precision.
 */
int precision_parser(const char *format, int *i)
{
	int trend_i = *i + 1;
	int precision = -1;

	if (format[trend_i] != '.')
		return (precision);

	precision = 0;

	for (trend_i += 1; format[trend_i] != '\0'; trend_i++)
	{
		if (isdigit(format[trend_i]))
		{
			precision = precision * 10;
			precision = precision + format[trend_i] - '0';
		}
		else
		{
			break;
		}
	}

	*i = trend_i - 1;
	return (precision);
}
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	const char *format = "%.*s\n";
	int i = 0;

	char str[] = "Noureddine, Yassine!";
	int precision = precision_parser(format, &i);

	printf("Parsed Precision: %d\n", precision);

	printf(format, precision, str);

	return (0);
}
