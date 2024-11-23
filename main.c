#include "header.h"
#include <string.h>
#include <stdio.h>

int main()
{
    char *str = "ayoub";
    char *st = "hihi";
    int a = 21;
    char c = 'a';
    //ft_printf("%s", str);
    //printf("\n");
    int u = ft_printf("this string is : %s\n%c", str, c);
    //int u = printf("s", a);
    printf("%d", u);
    return 0;
}