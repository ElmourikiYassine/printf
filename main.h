#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct Format_for_args - Holds format
 * specifier and corresponding print function
 * @x: Format specifier character
 * @print_func: Pointer to corresponding print function
 */
typedef struct Format_for_args
{
	char x;
	int (*print_func)(va_list, char *, int *);
} format_args;

int is_char(char c);
int power(int base, int exp);
int _putchar(char c);
int _strlen(const char *s);

int printf_char(va_list c, char *buffer, int *buffer_index);
int print_number_to_buffer(int num, char *buffer, int *buffer_index);
int printf_string(va_list s, char *buffer, int *buffer_index);
int print_number(int num);
int printf_int(va_list integer, char *buffer, int *buffer_index);

/**
 * printf_percent - Print a percent character
 * @percent: Argument list (unused)
 * @buffer: The buffer to store the characters
 * @buffer_index: Pointer to the buffer index
 *
 * Return: Always 1
 */
int printf_percent(__attribute__((unused)) va_list percent,
		char *buffer, int *buffer_index);

int print_base_number_to_buffer(unsigned int num, int base,
		char case_flag, char *buffer, int *buffer_index);

int printf_binary(va_list binary, char *buffer, int *buffer_index);
int printf_unsigned(va_list unsigned_int, char *buffer, int *buffer_index);
int printf_octal(va_list octal, char *buffer, int *buffer_index);
int printf_hex_lower(va_list hex_lower, char *buffer, int *buffer_index);
int printf_hex_upper(va_list hex_upper, char *buffer, int *buffer_index);
int print_unsigned_number(unsigned int num);
<<<<<<< HEAD
int printf_string_with_non_printable(va_list s, char *buffer, int *buffer_index);
=======
>>>>>>> 660707b410444e3adad29c8dc93aeec90d07370f

int format_analyzer_to_buffer(const char *format, format_args *formats,
		va_list *arg, char *buffer, int *buffer_index);

/**
 * _printf - Main printf-like function
 * @format: The format string
 * @...: Additional arguments
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...);

#endif

