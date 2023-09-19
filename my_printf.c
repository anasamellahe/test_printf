#include "main.h"
/**
* _printf - printf
* @format: format
* Return: count
*/
int _printf(const char *format, ...)
{
	int	i;
	int	count;
	int	is_printed;
	va_list	t_list;
	format_t formats[] = {{"s", print_string}, {"c", print_char},
		{"d", print_int},
		{"i", print_int},
		{"u", print_int},
		{"x", print_base},
		{"X", print_base},
		{"o", print_base},
		{"b", print_base},
		{"%", print_percent},
		{"S", print_non_printable},
		{"p", print_addres},
		{NULL, NULL}
	};

	i = 0;
	count = 0;
	is_printed = 0;
	va_start(t_list, format);
	if (!format)
		return (-1);
	if (format[0] == '%' && !format[i + 1])
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			is_printed = get_format((char *)&format[i + 1], t_list, formats);
			if (is_printed != -1)
			{
				if (is_printed != -2)
					count += is_printed;
				i++;
			}
		}
		if (is_printed <=  0 && is_printed != -2)
			count += _putchar(format[i]);
		is_printed = 0;
		i++;
	}
	va_end(t_list);
	return (count);
}
