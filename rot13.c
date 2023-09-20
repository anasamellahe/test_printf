#include "main.h"
/**
* rot13 - print the rot 13
* @ap: struct
* @frm: format
* Return: count
*/
int rot13(va_list ap, char frm)
{
	char *s;
	int count;
	int len;
	int i;

	(void)frm;
	i = 0;
	s = va_arg(ap, char *);
	count = 0;
	if (!s)
		return (_putstr("(null)"));
	len = _strlen(s);
	if (!len)
		return (-2);
	while (s[i])
	{
		if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
			count += _putchar(s[i] + 13);
		else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
			count += _putchar(s[i] - 13);
		else
			count += _putchar(s[i]);
		i++;
	}
	return (count);
}
