#include "./../main.h"
#include <stdio.h>

int main(void)
{
    int a;
    int number;

    number = 123456;
    a = printf("this is: %i\n, %d\n", number, number);
    printf("printf: Number of characters printed: %d\n", a);

    a = _printf("this is: %i\n, %d\n", number, number);
    printf("_printf: Number of characters printed: %d\n", a);

    printf("----------\n");

    a = printf("%c\n", 'a');
    printf("printf: Number of characters printed: %d\n", a);
    a = _printf("%c\n", 'a');
    printf("_printf: Number of characters printed: %d\n", a);

    printf("----------\n");

    a = printf("%s\n", "Hello, World");
    printf("printf: Number of characters printed: %d\n", a);
    a = _printf("%s\n", "Hello, World");
    printf("_printf: Number of characters printed: %d\n", a);

	_printf("this binary : %b\n", 98);

    a = printf("%%\n");
    printf("%d\n", a);

    a = _printf("%%\n");
    _printf("%d\n", a);

    a = printf("%\n");
    printf("%d\n", a);

    a = _printf("%\n");
    _printf("%d\n", a);

    a = printf("%c %s %d %% %q\n", 'A', "Hello", 12345);
    printf("%d\n", a);

    a = _printf("%c %s %d %% %q\n", 'A', "Hello", 12345);
    _printf("%d\n", a);
a = printf("A Hello 12345 %% %%\n");
printf("%d\n", a);

a = _printf("A Hello 12345 %% %%\n");

_printf("%d\n", a);
    _printf("----------\n");
	a = _printf("%\n");
	_printf("%d", a);

    return (0);
}

