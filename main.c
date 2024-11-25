#include "header.h"
#include <string.h>
#include <stdio.h>

int main()
{
    char *str = "ayoub";
    char *st = "hihi";
    int a = -42;
    char c = '*';

    //int i = ft_printf("%d %c %s",a, c, str);
    //int i = ft_printf("%x", a);
    close(1);
    int i = printf("ayoub");
    char j = i + 48;
    write(2, &j, 1);
    return 0;
}