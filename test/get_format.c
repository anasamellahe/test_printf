#include "main.h"
/**
* get_format - get format
* @c: forma
* @ap: struct
* @formats: struct
* Return: -1 Error or word count
*/
int get_format(char *c, va_list ap, format_t *formats)
{
	int i;
	int (*f)(va_list ap, char frm);

	i = 0;
	while (formats[i].format)
	{
		if (*c == *formats[i].format)
		{
			f = formats[i].f;
			return (f(ap, *formats[i].format));
		}
		i++;
	}
	return (-1);
}
