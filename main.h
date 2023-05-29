#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/* printf_function */
int _printf(const char *, ...);

/* _putchar_functions */
int _putchar(char);
int buffer(char);

/* handler_functions */
int format_handler(const char *, va_list);
int process_format(const char *, va_list, int *);

/* printing_functions */
int print_string(va_list);
int print_char(va_list);
int print_integer(va_list);
int print_binary(va_list);
int print__encoded_rot13(va_list);
int print_unsigned(va_list);
int print_octal(va_list);
int print_hexadecimal_low(va_list);
int print_hexadecimal_upp(va_list);
int print_pointer(va_list);
int print_reverse_string(va_list);


/* utils_functions*/
int _strlen(const char *);
int print(char *);
char *itoa(long int, int);

/**
 * struct _format - Type definition as struct
 * @type: Format chosen by the user
 * @f: function associated with the printf
 **/
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;


#endif

