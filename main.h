#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

typedef struct Format_for_args
{
	char x;
	int (*print_func)(void *);
} format_args;

int _printf(const char *format, ...);
int _putchar(char c);

#endif
