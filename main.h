#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct Format_for_args - Holds format specifier and
 * corresponding print function
 * @x: Format specifier character
 * @print_func: Pointer to corresponding print function
 */
typedef struct Format_for_args
{
	char x;                      /* Format specifier character */
	int (*print_func)(void *);   /* Pointer to corresponding print function */
} format_args;

/**
 * _putchar - Helper function: Writes a character to the standard output
 * @c: The character to be written
 * Return: 1 on success, -1 on error
 */
int _putchar(char c);

/**
 * _strlen - Helper function: Calculates the length of a string
 * @s: The input string
 * Return: Length of the string
 */
int _strlen(const char *s);

/* Print functions for different types */

/**
 * printf_char - Print a character
 * @c: The character to be printed
 * Return: 1 on success, -1 on error
 */
int printf_char(void *c);

/**
 * printf_string - Print a string
 * @s: The string to be printed
 * Return: Length of the string on success, -1 on error
 */
int printf_string(void *s);

/**
 * printf_int - Print an integer
 * @integer: The integer to be printed
 * Return: 1 on success, -1 on error
 */
int printf_int(void *integer);

/**
 * format_analyzer - Analyze and print formatted output
 * @format: The format string
 * @formats: Array of format_args structs
 * @arg: va_list of arguments
 * Return: Number of characters printed
 */
int format_analyzer(const char *format, format_args *formats, va_list *arg);

/**
 * _printf - Main printf-like function
 * @format: The format string
 * @...: Additional arguments
 * Return: Number of characters printed
 */
int _printf(const char *format, ...);

#endif


