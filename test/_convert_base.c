#include "main.h"
/**
* _convert_base - convert base
* @nbr: struct
* @base: forma
* @count: count
* Return: 1
*/
int _convert_base(long int nbr, char *base, int *count)
{
	int len;

	len = _strlen(base);
	if (nbr < 0)
	{
		_putchar('-');
		nbr *= -1;
	}
	if (nbr >= len)
	{
		*count += 1;
		_convert_base(nbr / len, base, count);
	}
	_putchar(base[nbr % len]);
	return (1);
}
