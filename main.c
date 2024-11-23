#include "header.h"
#include <string.h>
#include <stdio.h>

int main()
{
    char *str = "ayoub";
    char *st = "hihi";
    int a = 0;
    char c = 'a';
    //ft_printf("%s", str);
    //printf("\n");
    //int u = ft_printf("%s\n%d\n%s\n%c", str, a, st, c);
    int u = printf("%s\n%d\n%s\n%c", str, a, st, c);
    printf("\n%d", u);
    return 0;
}