#include "ft_printf.h"
#include <string.h>
#include <stdio.h>

int main()
{
    int i = ft_printf(" %p %p ", 0, 0);
    int j = printf(" %p %p ", 0, 0);

    ft_printf("my fun : %d\noringin : %d\n", i, j);

}