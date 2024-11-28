/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadouay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:57:43 by ayadouay          #+#    #+#             */
/*   Updated: 2024/11/28 20:57:45 by ayadouay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

//all prototype !!
int	ft_printf(const char *format, ...);
int	ft_putchar_fd(char c, int fd);
int	ft_putnbr_fd(int n, int fd, int len);
int	ft_putstr_fd(char *s, int fd);
int	unsigned_int(unsigned int n, int fd);
int	puthxs_lower(unsigned int nbr, int fd, char *str);
int	puthxs_upper(unsigned int nbr, int fd, char *str);
int	ft_putadrees(unsigned long nbr, int fd, char *str);

#endif
