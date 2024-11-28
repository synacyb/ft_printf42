#include "ft_printf.h"
#include <string.h>
#include <stdio.h>

int main()
{
    int i = ft_printf("%");
    int j = printf("%");

    ft_printf("%d\n%d\n", i, j);
}