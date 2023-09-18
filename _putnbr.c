#include "main.h"
/**
* _putnbr - print number
* @nbr: number
* @count: count
*/
void _putnbr(long int nbr, int *count)
{
	if (nbr < 0)
	{
		_putchar('-');
		nbr *= (-1);
	}
	if (nbr > 9)
	{
		*count += 1;
		_putnbr(nbr / 10, count);

	}
	_putchar((nbr % 10) + 48);
}
