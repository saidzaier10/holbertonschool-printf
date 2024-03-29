#include "main.h"

/**
* print_string - Prints a string
* @args: The va_list containing the string to print
*
* Return: The number of characters printed
*/
int print_string(va_list args)
{
	char *str = va_arg(args, char*);

	int count = 0;

	while (*str)
	{
		count += _putchar(*str);
		str++;
	}
	return (count);
}
