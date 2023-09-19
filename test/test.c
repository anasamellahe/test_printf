#include "main.h"

int main()
{
    int len = _printf("hello\n");
    int len1 = printf("hello\n");
    _printf("_printf len = %d len1 = %d\n", len, len1);
    printf("printf len = %d len1 = %d\n", len, len1);
    len = _printf("%s\n", NULL);
    len1 = printf("%s\n", NULL);
    _printf("_printf len = %d len1 = %d\n", len, len1);
    printf("printf len = %d len1 = %d\n", len, len1);
    len = _printf("hello% world%\n");
    len1 = printf("hello% world%\n");
     _printf("_printf len = %d len1 = %d\n", len, len1);
    printf("printf len = %d len1 = %d\n", len, len1);
    len = _printf("%c\n", 'A');
    len1 = printf("%c\n", 'A');
     _printf("_printf len = %d len1 = %d\n", len, len1);
    printf("printf len = %d len1 = %d\n", len, len1);
    len = _printf("%c%c\n", 'A', 'H');
    len1 = printf("%c%c\n", 'A', 'H');
     _printf("_printf len = %d len1 = %d\n", len, len1);
    printf("printf len = %d len1 = %d\n", len, len1);
    len = _printf("%c%s%d%d\n", 'A', "hello", 10, 20);
    len1 = printf("%c%s%d%d\n", 'A', "hello", 10, 20);
     _printf("_printf len = %d len1 = %d\n", len, len1);
    printf("printf len = %d len1 = %d\n", len, len1);
    return 0;
}