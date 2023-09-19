#include "main.h"
/**
* print_char - convert base
* @ap: struct
* @frm: forma
* Return: word
*/
int print_char(va_list ap, char frm)
{
	char    c;

	(void)(frm);
	c = va_arg(ap, int);
	return (_putchar(c));
}
