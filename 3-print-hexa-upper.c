#include "main.h"

int is_lower(char);
char *str_to_upp(char *);

/**
 * print_hexadecimal_upp - the function prints a number in hexa format
 * @arg_list: the number to print in hexa upper
 * Return: the result
 **/
int print_hexadecimal_upp(va_list arg_list)
{
	char *hex_buffer;
	int s;

	hex_buffer = integer_to_string(va_arg(arg_list, unsigned int), 16);
	hex_buffer = str_to_upp(hex_buffer);

	s = print((hex_buffer != NULL) ? hex_buffer : "NULL");

	return (s);
}

/**
 * is_lower - the function checks if the char is in lowercase
 * @c: the char in our function
 * Return: 1 or 0
 **/
int is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * str_to_upp - the function changes to the string to uppercase
 * @str: the string as input
 * Return: resultant string
 **/
char *str_to_upp(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (is_lower(str[index]))
		{
			str[index] = str[index] - 32;
		}
		index++;
	}

	return (str);
}

