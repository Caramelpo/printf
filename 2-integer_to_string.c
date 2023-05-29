#include "main.h"

/**
 * itoa - the function converts the integer to string
 * @a: the integer as input
 * @b: base
 * Return: resultant string from integer conversion
 **/
char *itoa(long int a, int b)
{
	char ind = 0;/* indication of the integer sign pos or neg */
	char *q;/* pointer*/
	unsigned long numb = a;
	static char buffer[50];
	static char *tab = "0123456789abcdef";/* our array initialized */


	if (a < 0)
	{
		numb = -a;
		ind = '-';
	}
	q = &buffer[49];
	*q = '\0';

	for (; numb != 0; numb = numb / b)
	{
		*(--q) = tab[numb % b];
	}

	if (ind)
	{
		*(--q) = ind;
	}
	return (q);
}
