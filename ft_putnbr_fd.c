/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadouay <ayadouay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:58:43 by ayadouay          #+#    #+#             */
/*   Updated: 2024/11/25 14:21:31 by ayadouay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int fd)
{
	long	num;
	char	arr[10];
	int		i;
	int 	len;

	len = 0;
	num = n;
	i = 0;
	if (num < 0)
	{
		len += ft_putchar_fd('-', fd);
		num = -num;
	}
	else if (num == 0)
		len += ft_putchar_fd('0', fd);
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
