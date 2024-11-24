#include "header.h"

int	unsigned_int(unsigned int n, int fd)
{
	long	num;
	char	arr[10];
	int		i;
	int		len;

	len = 0;
	num = n;
	i = 0;

	if (num == 0)
		len += write(fd, "0", 1);
	while (num > 0)
	{
		arr[i] = (num % 10) + '0';
		num = num / 10;
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		len += ft_putchar_fd(arr[i], fd);
		i--;
	}
	return (len);
}