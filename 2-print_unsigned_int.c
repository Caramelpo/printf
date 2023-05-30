#include "main.h"

/**
 * print_unsigned - the function prints an unsigned int
 * @list: the insgned int to print
 * Return: the lenght of the unsginedint
 */

int print_unsigned(va_list list)
{
	int s;
	char *ptr_buffer;

	ptr_buffer = integer_to_string(va_arg(list, unsigned int), 10);
	s = print((ptr_buffer != NULL) ? ptr_buffer : "NULL");
	return (s);
}
