#include "main.h"
/**
* get_function - Gets the print function for the specified specifier
* @specifiers: The format specifier character
*
* Return: The pointer to the print function, or NULL if not found
*/
int (*get_function(const char *specifiers))(va_list)
{
	format_specifier_t arrayspecifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_dec_integer},
		{'i', print_dec_integer},
		{'\0', NULL}
	};

	int index = 0;

	while (arrayspecifiers[index].specifier)
	{
		if (arrayspecifiers[index].specifier == specifiers[0])
			return (arrayspecifiers[index].ptr_function);
		index++;
	}

	return (NULL);
}
