#include "header.h"
#include <string.h>
#include <stdio.h>

int main()
{
    char *str = "ayoub";
    char *st = "hihi";
    int a = -1;
    char c = 'a';
    //ft_printf("%s", str);
    //printf("\n");
    int u = ft_printf("%u\n", a);
    //int u = printf("%u\n", a);
    printf("%d", u);
    return 0;
}