#include "main.h"

/**
 * _strlen - the function calculates  lenght of the entered string
 * @s: our input string
 * Return: THE lenght of the string
 */

int _strlen(const char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}

/**
 * print - the function is implemented to print the string
 * entered by the user
 *
 * @s1: our string.
 * Return: LeNgth of the string
 */

int print(char *s1)
{
	int index = 0;

	while (s1[index] != '\0')
	{
		_putchar(s1[index]);
		index++;
	}
	return (index);
}
