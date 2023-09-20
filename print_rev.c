#include "main.h"

/**
* print_rev - print string in revers
* @ap: struct
* @frm: forma
* Return: count
*/
int print_rev(va_list ap, char frm)
{
	char *s;
	int count;
	int len;

	(void)frm;
	s = va_arg(ap, char *);
	count = 0;
	if (!s)
		return (_putstr("(null)"));
	len = _strlen(s);
	if (!len)
		return (-2);
	len -= 1;
	while (len >= 0)
	{
		count += _putchar(s[len]);
		len--;
	}
	return (count);
}
