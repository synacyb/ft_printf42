#include "header.h"
#include <string.h>
#include <stdio.h>

int main()
{
    char *str = "ayoub";
    char *st = "hihi";
    int a = 110;
    char c = 'A';

    //int i = ft_printf("%d %c %s",a, c, str);
    int i = printf("%x", a);
    printf("\n%d", i);
    return 0;
}