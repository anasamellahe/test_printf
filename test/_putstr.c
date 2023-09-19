#include "main.h"
/**
* _putstr - print char
* @s: string
* Return: count
*/
int _putstr(char *s)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (s[i])
	{
		count += _putchar(s[i]);
		i++;
	}
	return (count);
}
