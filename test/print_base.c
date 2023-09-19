#include "main.h"
/**
* print_base - print base
* @ap: struct
* @frm: forma
* Return: count
*/
int print_base(va_list ap, char frm)
{
	int count;

	count = 1;
	switch (frm)
	{
		case 'X':
			 _convert_base(va_arg(ap, unsigned int), "0123456789ABCDEF", &count);
			break;
		case 'x':
			_convert_base(va_arg(ap, unsigned int), "0123456789abcdef", &count);
			break;
		case 'o':
			_convert_base(va_arg(ap, unsigned int), "01234567", &count);
			break;
	}
	return (count);
}
