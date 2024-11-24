#include "header.h"

int putadr_lower(long nbr, int fd)
{
    char str[] = "123456789abcdef";
    int len;
    int res = 0;

    len = 0;
    if (nbr == 0)
        len += write(fd, &str[0], 1);
    
    if (nbr < 0)
    {
        nbr *= -1;
        len++;
    }
    
    while (nbr > 0)
    {
        res = nbr % 10;
        len += write(fd, &str[res], 1);
        nbr /= 10;
    }
    return (len);
}