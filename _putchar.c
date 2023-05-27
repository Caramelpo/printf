#include "main.h"

/**
 * _putchar - the function writes the character entered tp stdout
 * @c: the character entered by the user
 * Return: 1 (succss)
 */

int _putchar(char c)
{
	return (buffer(c));
}

/**
 * buffer - the function savesthe character in a buffer
 * @c: the char to save in buff
 * Return: 1 (always)
 */

int buffer(char c)
{
	static int x;
	static char buffering[1024];

	if (c == -1 || x == 1024)
	{
		write(1, buffering, x);
		x = 0;
	}
	if (c != -1)
	{
		buffering[x++] = c;
	}
	return (1);
}
