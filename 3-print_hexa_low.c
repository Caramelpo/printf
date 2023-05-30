#include "main.h"

/**
 * print_hexadecimal_low - the function prints a number in hexa format
 * @list: the integer to print in hexa format
 * Return: resultat, lenghth
 **/
int print_hexadecimal_low(va_list list)
{
	char *hex_buffer;
	int s;

	unsigned int number = va_arg(list, unsigned int);

	hex_buffer = integer_to_string(number, 16);

		if (hex_buffer != NULL)
			s = print(hex_buffer);
		else
		{
			s = print("NULL");
		}

		return (s);
}
