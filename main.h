#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
* struct format_specifier - Struct to hold format
*                   specifiers and their handlers
* @specifier: The format specifier character
* @ptr_function: Pointer to the function that handles the specifier
*/

typedef struct format_specifier
{
	char specifier;
	int (*ptr_function)(va_list);
} format_specifier_t;

int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_dec_integer(va_list args);
int _printf(const char *format, ...);
int _putchar(char c);
int (*get_function(const char *specifier))(va_list);

#endif /* MAIN_H */
