#include "main.h"

/**
 * print_reverse_string - the function prints a string in the reverse order
 * @args: THe list of arguments
 * Return: ThE number of characters n the string
 */

int print_reverse_string(va_list args)
{
	const char *input_str;
	int idx, str_len;

	input_str = va_arg(args, const char *);
	str_len = _strlen(input_str);
	idx = str_len - 1;

	do {
		_putchar(input_str[idx]);
		idx--;
	} while (idx >= 0);
	return (str_len);
}
