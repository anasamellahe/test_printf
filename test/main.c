#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    len = _printf("Negative:[%d]\n", -762534);
    len2 = printf("Negative:[%d]\n", -762534);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    len = _printf("Character:[%c]\n", 'H');
    len2 = printf("Character:[%c]\n", 'H');
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    len =_printf("String:[%s]\n", "I am a string !");
    len2 = printf("String:[%s]\n", "I am a string !");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    _printf("");
    printf("");
     printf("\n%d\n",printf("Hello% world %"));
     _printf("\n%d\n",_printf("Hello% world %"));
    _printf("NULL string: %s\n", NULL);
    printf("NULL string: %s\n", NULL);
    _printf("empty string: %s\n", "");
    printf("empty string: %s\n", "");
    _printf("NULL char : %c\n", NULL);
    printf("NULL char : %c\n", NULL);
    _printf("binary : %b\n", 0);
    printf("binary : %b\n", 0);
    _printf("binary : %b\n", INT_MIN);
    printf("binary : %b\n", INT_MIN);
    _printf("binary : %b\n", INT_MAX);
    printf("binary : %b\n", INT_MAX);
     _printf("binary : %b\n", 98);
    printf("binary : %b\n", 98);
    len = _printf("%S\n", "Best\nSchool");
    len2 = _printf("%S\n", "Best\nSch\tool");
    _printf("Len:[%d]\n", len);
    _printf("Len2:[%d]\n", len2);
    _printf("NULL string:  %S\n", NULL);
    _printf("empty string:  %S\n", "");
      _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    return (0);
}

