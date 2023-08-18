#include "main.h"

int _strlen(char *s)
{
	int i = 0;	

	while (s[i] != '\0')
		i++;

	return (i);
}

int printf_char(void *c)
{
	char charpointer = *(char *)c;
	int length = _strlen((char *)c);

	_putchar(charpointer);
	_putchar('\n');

	return (length + 1);
}

int printf_string(void *s)
{
	int i;
	char *string = *(char **)s;
	int length = _strlen(*(char **)s);

	for (i = 0; i < length; i++)
		_putchar(string[i]);

	_putchar('\n');
	return (length + 1);
}

int _printf(const char *format, ...)
{
	va_list ap;
	int i;
	long unsigned int j;
	int count;
	void *arg;

	format_args formats[] = {
		{'c', printf_char},
		{'s', printf_string},
		{'\0', NULL}
	};

	va_start(ap, format);

	count = 0;
	for (i = 0; format && format[i] != '\0'; i++)
	{

		for (j = 0; j <  sizeof(formats) / sizeof(formats[0]); j++)
		{
			if (format[i - 1] == '%' && format[i] == formats[j].x)
			{
				arg = (void *) va_arg(ap, void *);
				if (arg)
					count += formats[j].print_func(&arg);
				break;
			}
			/**
			else if (formats[j].x == '\0' && format[i - 1] == '%' && format[i] == formats[j].x)
			{
				 * TODO: here when we go over all
				 * the sepcifiers 
				 *
				_putchar(format[i]);
				break;
			}
		*/	
		}
	}
		va_end(ap);
		/*printf("the count is : %d\n", count);*/
		return (count);
}
