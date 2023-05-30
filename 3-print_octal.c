#include "main.h"

/**
 * print_octal - the function prints an unsigned octal
 * @list: integer to print in octal
 * Return: resultant length
 **/
int print_octal(va_list list)
{
	char *oct_buffer;
	int s;

	unsigned int number = va_arg(list, unsigned int);

	oct_buffer = integer_to_string(number, 8);

	if (oct_buffer != NULL)
		s = print(oct_buffer);
	else
	{
		s = print("NULL");
	}

	return (s);
}
