#include <stdarg.h>
#include <stdio.h>

typedef struct
{
    char format;
    void (*print_func)(va_list);
}

format_args;

void printf_char(va_list arg)
{
    putchar(va_arg(arg, int));
}

void printf_string(va_list arg)
{
    char *str = va_arg(arg, char*);
    printf("%s", str);
}

void printf_int(va_list arg)
{
    int num = va_arg(arg, int);
    printf("%d", num);
}

void printf_binary(va_list arg)
{
    int num = va_arg(arg, int);
    printf("%s", "Binary representation of num");
}

int format_analyzer(const char *format, format_args *formats, va_list *arg)
{
    int count = 0;

    while (*format)
	{
        if (*format == '%')
		{
            format++;
            format_args *current_format = formats;
            while (current_format->format != '\0')
			{
                if (*format == current_format->format)
				{
                    current_format->print_func(*arg);
                    count++;
                    break;
                }
                current_format++;
            }
        }
		else
		{
            putchar(*format);
            count++;
        }
        format++;
    }

    return count;
}

int _printf(const char *format, ...)
{
    va_list arg;
    int count = 0;

    format_args formats[] =
	{
        {'c', printf_char},
        {'s', printf_string},
        {'d', printf_int},
        {'i', printf_int},
        {'b', printf_binary},
        {'\0', NULL}
    };

    if (!format)
        return -1;

    va_start(arg, format);

    count = format_analyzer(format, formats, &arg);
    va_end(arg);

    return count;
}

int main() {
    _printf("Hello, %s! This is a number: %d\n", "world", 42);
    _printf("%%");
    _printf("This is another example: %c\n", 'A');
    _printf("%%");
    return 0;
}
