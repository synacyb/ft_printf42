#include "ft_printf.h"

int puthxs_upper(unsigned int nbr, int fd)
{
	char str[] = "0123456789ABCDEF";
	char arr[18];
	int len;

	int i = 0;
	int res = 0;
	len = 0;
	if (nbr == 0)
		len += ft_putchar_fd(str[0], fd);
	while (nbr > 0)
	{
		res = nbr % 16;
		arr[i] = str[res];
		i++;
		nbr /= 16;
	}
	i = i - 1;
	while (i >= 0)
		len += ft_putchar_fd(arr[i--], fd);
	return (len);
}