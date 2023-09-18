#include "main.h"
/**
* _strlen - len
* @s: string
* Return: lenght
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
