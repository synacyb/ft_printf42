/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadouay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:58:43 by ayadouay          #+#    #+#             */
/*   Updated: 2024/11/08 09:59:06 by ayadouay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

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
		len += write(1, "-", 1);
		num = -num;
	}
	else if (num == 0)
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
		len += write(fd, &arr[i], 1);
		i--;
	}
	return (len);
}
