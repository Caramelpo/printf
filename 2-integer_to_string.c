#include "main.h"

/**
 * integer_to_string - the function converts the integer to string
 * @a: the integer as input
 * @b: base
 * Return: resultant string from integer conversion
 **/
char *integer_to_string(long int a, int b)
{
	char ind = 0; /* indication of the integer sign pos or neg */
	char *q; /* pointer*/
	unsigned long numb = a;
	static char buffer[50];
	static char *tab = "0123456789abcdef"; /* our array initialized */


	if (a < 0)
	{
		numb = -a;
		ind = '-';
	}
	q = &buffer[49];
	*q = '\0';

	do {
		*--q = tab[numb % b];
		numb = numb / b;
	} while (numb != 0);

	if (ind)
	{
		*--q = ind;
	}
	return (q);
}
