#include "main.h"
/**
* print_int - print int
* @ap: struct
* @frm: forma
* Return: count
*/
int print_int(va_list ap, char frm)
{
	long int nbr;
	int	count;

	(void)(frm);
	count = 1;
	if (frm == 'u')
		nbr = va_arg(ap, unsigned int);
	else
		nbr = va_arg(ap, int);
	_putnbr(nbr, &count);
	return (count);
}
