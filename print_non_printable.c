#include "main.h"
/**
* print_non_printable - print hex
* @ap: struct
* @frm: forma
* Return: count
*/
int print_non_printable(va_list ap, char frm)
{
	unsigned char *string = va_arg(ap, unsigned  char *);
	int i;
	int count;

	(void)frm;
	count = 0;
	i = 0;
	if (!string || !string[i])
		return (-2);
	while (string[i])
	{
		if ((string[i] > 0 && string[i] < 32) || string[i] >= 127)
		{
			count += _putstr("\\x");
			_putchar("0123456789ABCDEF"[string[i] / 16]);
			_putchar("0123456789ABCDEF"[string[i] % 16]);
		}
		else
			count += _putchar(string[i]);
		i++;
	}
	return (count);
}
