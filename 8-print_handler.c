#include "main.h"

/**
 * format_handler - this function is created to control the format
 * desired by the user
 * @format_str: the format if the string chosen by the user
 * @args: our listof arguments.
 * Return: THE total size of the formatted output
 */

int format_handler(const char *format_str, va_list args)
{
	int size, total_size = 0;
	int format_idx = 0;

	while (format_str[format_idx] != '\0')
	{
		if (format_str[format_idx] == '%')
		{
			size = process_format(format_str, args, &format_idx);
			if (size == -1)
				return (-1);
			total_size = total_size + size;
		}
		else
		{
			_putchar(format_str[format_idx]);
			total_size++;
		}
		format_idx++;
	}
	return (total_size);
}

/**
 * process_format - this function is implemented to control
 * the percent format in print
 * @format_str: our format of the string input
 * @args: LISt of argumentss
 * @format_idx: index
 * Return: the size of the formatted output.
 */

int process_format(const char *format_str, va_list args, int *format_idx)
{
	int format_arr_idx = 0;
	int size = 0;
	int num_formats;

	format formats[] = {
		{'s', print_string}, {'c', print_char},
		{'d', print_integer}, {'i', print_integer},
		{'b', print_binary}, {'u', print_unsigned},
		{'o', print_octal}, {'x', print_hexadecimal_low},
		{'X', print_hexadecimal_upp}, {'p', print_pointer},
		{'r', print_reverse_string}, {'R', print_encoded_rot13}
	};
	(*format_idx)++;
	if (format_str[*format_idx] == '\0')
		return (-1);
	if (format_str[*format_idx] == '%')
	{
		_putchar('%');
		return (1);
	}
	num_formats = sizeof(formats) / sizeof(formats[0]);
	while (format_arr_idx < num_formats)
	{
		if (format_str[*format_idx] == formats[format_arr_idx].type)
		{
			size = formats[format_arr_idx].f(args);
			return (size);
		}
		format_arr_idx++;
	}
	_putchar('%');
	_putchar(format_str[*format_idx]);
	size = 2;
	return (size);
}
