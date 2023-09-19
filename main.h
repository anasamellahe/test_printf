#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
* struct format - struct
* @format: struct
* @f: struct
*/
typedef struct format
{
	char *format;
	int (*f)(va_list, char);
} format_t;

int _printf(const char *format, ...);
int _putchar(char c);
int _putstr(char *s);
void _putnbr(long int nbr, int *count);
int print_int(va_list, char frm);
int print_string(va_list, char frm);
int print_char(va_list, char frm);
int get_format(char *c, va_list ap, format_t *formats);
int _strlen(char *s);
int print_base(va_list ap, char frm);
int _convert_base(long int nbr, char *base, int *count, int len);
int print_percent(va_list ap, char frm);
int print_non_printable(va_list av, char frm);

#endif
