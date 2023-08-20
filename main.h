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
	int (*print_func)(va_list);   /* Pointer to corresponding print function */
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
int printf_char(va_list c);

/**
 * printf_string - Print a string
 * @s: The string to be printed
 * Return: Length of the string on success, -1 on error
 */
int printf_string(va_list s);

/**
 * print_number - Print an integer as individual digits
 * @num: The integer to be printed
 *
 * Return: Number of characters printed
 */
int print_number(int num);
/**
 * printf_int - Print an integer
 * @integer: The integer to be printed
 * Return: 1 on success, -1 on error
 */
int printf_int(va_list integer);

/**
 * printf_percent - Print a percent character
 * @percent: Argument list (unused)
 * Return: Always 1
 */

int printf_percent(__attribute__((unused)) va_list percent);

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

/**
 * is_char - Check if a character is a letter (a-z or A-Z)
 * @c: The character to check
 *
 * Return: 1 if the character is a letter, 0 otherwise
 */
int is_char(char c);

/**
 * power - Calculate the power of a number
 * @base: The base number
 * @exp: The exponent
 *
 * Return: The result of base raised to the power of exp
 */
int power(int base, int exp);

/**
 * print_base_number - Print a number in a specified base
 * @num: The number to be printed
 * @base: The base for printing
 * @case_flag: Flag for uppercase or lowercase letters in hexadecimal
 *
 * Return: Number of characters printed
 */
int print_base_number(unsigned int num, int base, char case_flag);

/**
 * printf_binary - Print an unsigned integer in binary format
 * @binary: Pointer to the unsigned integer to be printed
 *
 * Return: Number of characters printed
 */
int printf_binary(va_list binary);

/**
 * printf_unsigned - Print an unsigned integer and return
 * the count of characters printed
 * @unsigned_int: Pointer to the unsigned integer to be printed
 *
 * Return: Number of characters printed
 */
int printf_unsigned(va_list unsigned_int);

/**
 * printf_octal - Print an unsigned integer in octal format
 * @octal: Pointer to the unsigned integer to be printed
 *
 * Return: Number of characters printed
 */
int printf_octal(va_list octal);
/**
 * printf_hex_lower - Print an unsigned integer in lowercase hexadecimal format
 * @hex_lower: Pointer to the unsigned integer to be printed
 *
 * Return: Number of characters printed
 */
int printf_hex_lower(va_list hex_lower);

/**
 * printf_hex_upper - Print an unsigned integer in uppercase hexadecimal format
 * @hex_upper: Pointer to the unsigned integer to be printed
 *
 * Return: Number of characters printed
 */
int printf_hex_upper(va_list hex_upper);

/**
 * print_unsigned_number - Print an unsigned integer as individual digits
 * @num: The unsigned integer to be printed
 *
 * Return: Number of characters printed
 */
int print_unsigned_number(unsigned int num);
#endif


