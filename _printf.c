#include "main.h"

void print_buffer(char buffer[], int *b_ind);

/**
* _printf - the function produces the output according to the format given
*@format: the string format entered by the user
*Return: how many bytes printed ( as integer)
*/

int _printf(const char *format, ...)
{
	int x;
	int  print = 0, print_c = 0;
	int v_f, v_w, v_pr, v_size, b_ind = 0;
	va_list ptr;
	char buffer[BUFFER_SIZE];

	if (format == NULL)
	{
		return (-1);
	}
	va_start(ptr, format);

	for (x = 0; format && format[x] != '\0'; x++)
	{
		if (format[x] != '%')
		{
			buffer[b_ind++] = format[x];
			if (b_ind == BUFF_SIZE)
				print_buffer(buffer, &b_ind);
			/* write(1, &format[x], 1);*/
			print_c++;
		}
		else
		{
			print_buffer(buffer, &b_ind);
			v_f = get_flags(format, &x);
			v_w = get_width(format, &x, ptr);
			v_pr = get_precisions(format, &x, ptr);
			v_s = get_size(format, &x);
			++x;
			print = handle_print(format, &x, ptr, buffer,
				v_f, v_w, v_pr, v_s);
			if (print == -1)
				return (-1);
			print_c = print_c + print;
		}
	}
	print_buffer(buffer, &b_ind);
	va_end(ptr);
	return (print_c);
}

/**
 * print_buffer - Prints the buffer contents if it exist
 * @buffer: Array of characters
 * @b_ind: Index at which to add next char, and represents the length.
 */
void print_buffer(char buffer[], int *b_ind)
{
	if (*b_ind > 0)
		write(1, &buffer[0], *b_ind);
	*b_ind = 0;
}

