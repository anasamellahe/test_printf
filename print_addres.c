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
	unsigned long int arg = va_arg(ap, unsigned long int);

	count = 0;
	(void)frm;
	if (!arg)
		return (_putstr("(nil)"));
	count += _putstr("0x");
	_convert_base(arg, "0123456789abcdef", &count, 16);
	return (count);
}
