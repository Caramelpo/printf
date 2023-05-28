#include "main.h"

/**
 * print_binary - Prints an integer in binary format.
 * @arg_list: The integer to print in binary.
 * Return: Length of the binary string.
 **/
int print_binary(va_list arg_list)
{
	int length;
	char *binary_buffer;
	unsigned int number;

	number = va_arg(arg_list, unsigned int);
	binary_buffer = itoa(number, 2);

	length = print(binary_buffer);

	return (length);
}


