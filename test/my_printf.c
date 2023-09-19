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
		{"%", print_percent},
		{NULL, NULL}
	};

	i = 0;
	count = 0;
	is_printed = 0;
	va_start(t_list, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			is_printed = get_format((char *)&format[i + 1], t_list, formats);
			if (is_printed != -1)
				i++;
		}
		if (is_printed == -1 || is_printed == 0)
			count += _putchar(format[i]);
		count += is_printed;
		is_printed = 0;
		i++;
	}
	return (count);
}
