#include "main.h"

/**
 * print_string - the function prints a string
 * @a: our function s argument
 * Return: lenght of thestring entered
 */

int print_string(va_list a)
{
	int ext;

	if (va_arg(a, char *) != NULL)
	{
		ext = print(va_arg(a, char*));
	}
	else
	{
		ext = print("(null)");
	}
	return (ext);
}
