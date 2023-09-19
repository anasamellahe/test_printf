#include "main.h"

/**
* print_addres - print addreas
* @ap: struct
* @frm: format
* Return: count
*/
int print_addres(va_list ap, char frm)
{
	int count;
	void *arg = va_arg(ap, void *);

	count = 0;
	(void)frm;
	if (!arg)
		return (_putstr("(null)"));
	count += _putstr("0x");
	_convert_base((long int)arg, "0123456789ABCDEF", &count, 16);
	return (count);
}
