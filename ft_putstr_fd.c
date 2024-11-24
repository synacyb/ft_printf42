/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadouay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:00:47 by ayadouay          #+#    #+#             */
/*   Updated: 2024/11/08 10:00:56 by ayadouay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

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
		len += write(fd, &s[i], 1);
		i++;
	}
	return (len);
}
