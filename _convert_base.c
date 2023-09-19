#include "main.h"
/**
* _convert_base - convert base
* @nbr: struct
* @base: forma
* @count: count
* Return: 1
*/
void _convert_base(long int nbr, char *base, int *count, int len)
{
	if (nbr >= len)
	{
		*count += 1;
		_convert_base(nbr / len, base, count);
	}
	_putchar(base[nbr % len]);
	return (1);
}
