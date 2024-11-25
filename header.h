#ifndef HEADER_H
#define HEADER_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

//all prototype !!
int ft_printf(const char *format, ...);
int	ft_putchar_fd(char c, int fd);
int	ft_putnbr_fd(int n, int fd);
int	ft_putstr_fd(char *s, int fd);
int	unsigned_int(unsigned int n, int fd);
int puthxs_lower(long nbr, int fd);
#endif