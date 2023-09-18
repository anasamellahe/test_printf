#include "main.h"
/**
* print_string - print string
* @ap: struct
* @frm: forma
* Return: putstr
*/
int print_string(va_list ap, char frm)
{
	char *s;

	(void)(frm);
	s = va_arg(ap, char *);
	if (!(s))
		return (_putstr("(null)"));
	return (_putstr(s));
}
