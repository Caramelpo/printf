#include "main.h"

/**
 * print_integer - the function prints a num in base 10
 * @list: integer printed in base 10
 *
 * Return: resultant length
 **/

int print_integer(va_list list)
{
	int s;
	char *ptr_buffer;

	ptr_buffer = itoa(va_arg(list, int), 10);
	s = print((ptr_buffer != NULL) ? ptr_buffer : "NULL");
	return (s);
}
