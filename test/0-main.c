#include "./../main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int a;
	int number;


	number = 123456;

	a = printf("this is: %i\n, %d\n", number, number);
	printf("%d\n", a);

	a = _printf("this is: %i\n, %d\n", number, number);
	_printf("%d\n", a);


	printf("----------\n");

	a = printf("%c\n", 'a');
	printf("%d\n", a);
	a = _printf("%c\n", 'a');
	_printf("%d\n", a);

	printf("----------\n");

	a = printf("%s\n", "Hello, World");
	printf("%d\n", a);
	a = _printf("%s\n", "Hello, World");
	printf("%d\n", a);

	printf("----------\n");

	a = printf("printf: % ");
	printf("%d\n", a);

	a = _printf("_printf: % ");
	printf("%d\n", a);

	printf("----------\n");

	a = printf("%Z");
	printf("%d\n", a);

	a = _printf("%Z");
	printf("%d\n", a);

	printf("----------\n");

	a = printf("%W");
	printf("%d\n", a);

	a = _printf("%W");
	printf("%d\n", a);
	return (0);
}

