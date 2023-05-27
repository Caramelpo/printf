#include "main.h"

void print_buffer(char buffer[], int *b_ind);

/**
* _printf - the function produces the output according to the format given
*@format: the string format entered by the user
*Return: how many bytes printed ( as integer)
*/

int _printf(const char *format, ...)
{
	va_list args;
	int s;

	if (format == NULL)
	{
		return (-1);
	}
	s = _strlen(format);
	if (s <= 0)
	{
		return (0);
	}
	va_start(args, format);
	s = handler(format, args);

	_putchar(-1);
	va_end(args);

	return (s);
}
