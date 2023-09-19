#include "main.h"
/**
* _convert_base - convert base
* @nbr: struct
* @base: forma
* @count: count
* @len: len
* Return: 1
*/
int _convert_base(long int nbr, char *base, int *count, int len)
{
	if (nbr > len)
		_convert_base(nbr / len, base, count, len);
	(*count)++;
	_putchar(base[nbr % len]);
	return (1);
}
