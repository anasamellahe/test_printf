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
	int empty;

	(void)(frm);
	s = va_arg(ap, char *);
	if (!(s))
		return (_putstr("(null)"));
	empty = _putstr(s);
	if (!empty)
		return (-2);
	return (empty);
}
