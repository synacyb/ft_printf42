/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadouay <ayadouay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:00:47 by ayadouay          #+#    #+#             */
/*   Updated: 2024/11/24 18:29:03 by ayadouay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	i;
	int len;

	len = 0;
	i = 0;
	if (s == NULL)
		return 0;
	while (s[i] != '\0')
	{
		len += ft_putchar_fd(s[i], fd);
		i++;
	}
	return (len);
}
