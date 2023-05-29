#include "main.h"

/**
 * encode_rot13 - our function encodes the entered string
 * using the rot13 algo
 * @str: the input string to encode
 * Return: lenght of the secret code ;D
 */

int encode_rot13(char *str)
{
	int index = 0, counter;
	char *normal_chars =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13_chars =
		"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[index] != '\0')
	{
		counter = 0;
		while (normal_chars[counter] != '\0')
		{
			if (str[index] == normal_chars[counter])
			{
				_putchar(rot13_chars[counter]);
				break;
			}
			counter++;
		}
		if (normal_chars[counter] == '\0')
		{
			_putchar(str[index]);
		}
		index++;
	}
	return (index);
}

/**
 * print_encoded_rot13 - the function prints the rot13encpded string
 * @arg_list: OUR string to encode
 * Return: lenght of the secret code ;D
 */

int print_encoded_rot13(va_list arg_list)
{
	char *string;
	int string_length;

	string = va_arg(arg_list, char *);
	if (string != NULL)
	{
		string_length = encode_rot13(string);
	}
	else
	{
		string = "(ahyy)";
		string_length = encode_rot13(string);
	}
	return (string_length);
}
