#include "main.h"
#include <stdio.h>

int _strcmp(char *, char*);

/**
 * print_pointer - the function prints an integer in hexa format
 * @num: the integer as inpuut
 * Return: resultant lenght of the integer
 */

int print_pointer(va_list num)
{
	char *hex_str;
	int dim;

	hex_str = itoa(va_arg(num, unsigned long int), 16);
	if (!_strcmp(hex_str, "0"))
	{
		return (print("(nil)"));
	}
	dim = print("0x");
	if (!_strcmp(hex_str, "-1"))
	{
		dim = dim + print("ffffffffffffffff");
	}
	else
	{
		dim = dim + print(hex_str);
	}
	return (dim);
}

/**
 * _strcmp - the function compares two entered strings
 * @str1: first string
 * @str2: 2nd strung
 * Return: comparison of the two str ( as int)
 */

int _strcmp(char *str1, char *str2)
{
	int o = 0;

	for (; str1[o] != '\0'; o++)
	{
		if (str1[o] != str2[o])
		{
			return (str1[o] - str2[o]);
		}
	}

	return (0);
}
