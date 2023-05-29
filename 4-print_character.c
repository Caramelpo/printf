#include "main.h"
/**
 * print_char - the function prints the character entered by the us
 * @l: our function argument
 * Return: 1 (always)
 **/
int print_char(va_list l)
{
	int res;

	res = va_arg(i, int);

	_putchar(res);

	return (1);
}
