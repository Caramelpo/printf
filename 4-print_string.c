#include "main.h"

/**
 * print_string - the function prints a string
 * @a: our function s argument
 * Return: lenght of thestring entered
 */

int print_string(va_list a)
{
	int ext;
	char *y;

	y = va_arg(a, char *);

	if (y != NULL)
	{
		ext = print(y);
	}
	else
	{
		ext = print("(null)");
	}
	return (ext);
}
