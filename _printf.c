#include "main.h"
/**
* _printf - Prints formatted output to stdout
* @format: The format string
* @...: Optional arguments
*
* Return: The number of characters printed (excluding the null byte)
*/
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	format_specifier_t specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_dec_integer},
		{'i', print_dec_integer},
		{'\0', NULL}
	};

	int index = 0;


	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			while (specifiers[index].specifier)
			{
				if (*format == specifiers[index].specifier)
				{
					if (*format == 'd' || *format == 'i')
					{
						count += specifiers[index].ptr_function(args);
					}
					else
					{
						count += specifiers[index].ptr_function(args);
					}
					break;
				}
				index++;
			}
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
