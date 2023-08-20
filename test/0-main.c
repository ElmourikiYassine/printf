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
    return (0);
}

