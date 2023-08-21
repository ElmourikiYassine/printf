#include "./../main.h"
#include <limits.h>
#include <stdio.h>

int main(void)
{
    int a;
    int number;
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    number = 123456;
    a = printf("this is: %i\n, %d\n", number, number);
    printf("printf: Number of characters printed: %d\n", a);

    a = _printf("this is: %i\n, %d\n", number, number);
    printf("_printf: Number of characters printed: %d\n", a);

    printf("--------------------------------------------\n");

    a = printf("%c\n", 'a');
    printf("printf: Number of characters printed: %d\n", a);
    a = _printf("%c\n", 'a');
    printf("_printf: Number of characters printed: %d\n", a);

    printf("--------------------------------------------\n");

    a = printf("%s\n", "Hello, World");
    printf("printf: Number of characters printed: %d\n", a);
    a = _printf("%s\n", "Hello, World");
    printf("_printf: Number of characters printed: %d\n", a);

    printf("--------------------------------------------\n");

    _printf("this binary : %b\n", 98);

    printf("--------------------------------------------\n");

    a = printf("%%\n");
    printf("%d\n", a);

    a = _printf("%%\n");
    _printf("%d\n", a);

    printf("--------------------------------------------\n");

    a = printf("%\n");
    printf("%d\n", a);

    a = _printf("%\n");
    _printf("%d\n", a);


    printf("--------------------------------------------\n");

    a = printf("%c %s %d %%  %r\n", 'A', "Hello", 12345);
    printf("%d\n", a);

    a = _printf("%c %s %d %%  %r\n", 'A', "Hello", 12345);
    _printf("%d\n", a);

    printf("--------------------------------------------\n");

    a = printf("A Hello 12345 %% %%\n");
    printf("%d\n", a);

    a = _printf("A Hello 12345 %% %%\n");
    _printf("%d\n", a);

    printf("--------------------------------------------\n");

    a = printf("%");
    _printf("the return : %d\n", a);

    a = _printf("%");
    _printf("the return : %d\n", a);

    printf("--------------------------------------------\n");


    a = printf("% ");
    printf("the return : %d\n", a);

    a = _printf("% ");
    _printf("the return : %d\n", a);
    printf("--------------------------------------------\n");

    a = _printf("%d %% %r %d\n", 1,2);
    _printf("%d\n", a);

    printf("--------------------------------------------\n");

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");

    return (0);
}

