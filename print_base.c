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
	unsigned int arg;

	arg = va_arg(ap, unsigned int);
	count = 1;
	switch (frm)
	{
		case 'X':
			 _convert_base(arg, "0123456789ABCDEF", &count, 16);
			break;
		case 'x':
			_convert_base(arg, "0123456789abcdef", &count, 16);
			break;
		case 'o':
			_convert_base(arg, "01234567", &count, 8);
			break;
		case 'b':
			_convert_base(arg, "01", &count, 2);
			break;
	}
	return (count);
}
