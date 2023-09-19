#include "main.h"
#include <string.h>
int main ()
{
    /*
    char c = 10;
    char *p = &c;
    int len1;
    int len;
    len1 = printf("%p", p,p);
    printf("\n");
    len = _printf("%p", p,p);
    printf("\n");
    printf("len = [%d] len1 = [%d]\n", len, len1);
    len1 = printf("%p%p");
    printf("\n");
    len = _printf("%p%p");
    printf("\n");
    printf("len = [%d] len1 = [%d]\n", len, len1);
    return (0);
    */
    int x = 10;
    int *p_int = &x;
    char *p_char = "Hello";
    int *p_null = NULL;
    int arr[5];
    int *p_dynamic = malloc(sizeof(int));
    int len, len2;
    void *addr = (void *)0x7ffe637541f0;
    char ch = 'A';
    char *p_char_single = &ch;
    double *p_double = (double*)p_int; 
    int a;
    
    a = 10;
    len = printf("Address of x: %p\n", p_int);
    len2 = _printf("Address of x: %p\n", p_int);
    printf("Length %d\n My length %d\n", len, len2);
    len = printf("Address of string: %p\n", (void*)p_char);
    len2 =_printf("Address of string: %p\n", (void*)p_char);
    printf("Length %d\n My length %d\n", len, len2);
    len = printf("Null pointer: %p\n", (void*)p_null);
    len2 = _printf("Null pointer: %p\n", (void*)p_null);
    printf("Length %d\n My length %d\n", len, len2);

    /** Edge Cases **/
  
    len = printf("Address of array: %p\n", (void*)arr);
    len2 = _printf("Address of array: %p\n", (void*)arr);
    printf("Length %d\n My length %d\n", len, len2);
    len = printf("Address of dynamically allocated memory: %p\n", (void*)p_dynamic);
    len2 =_printf("Address of dynamically allocated memory: %p\n", (void*)p_dynamic);
    printf("Length %d\n My length %d\n", len, len2);
    len = printf("Address:[%p]\n", addr);
    len2 = printf("Address:[%p]\n", addr);
    printf("Length %d\n My length %d\n", len, len2);

    printf("Address of single character: %p\n", (void*)p_char_single);
    _printf("Address of single character: %p\n", (void*)p_char_single);
    printf("Address of double pointer (casted): %p\n", (void*)p_double);
    _printf("Address of double pointer (casted): %p\n", (void*)p_double);
    printf("--------------\n");
    len = printf(">>%p>>%p\n");
    len = printf(">>%p>>%p\n");
    len2 =_printf(">>%p>>%p\n");
    printf(">>%p\n", a);
    _printf(">>%p\n", a);
    printf("strlen = %d\n", strlen("%p\n"));
    printf("Length %d\n My length %d\n", len, len2);
    free(p_dynamic);
    return 0;
}
