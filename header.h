#ifndef HEADER_H
#define HEADER_H
# include <unistd.h>
# include <stdlib.h>
#include <stdarg.h>

//all prototype !!
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
int ft_printf(const char *, ...);
size_t	ft_strlen(const char *str);
static void	check(va_list args, char c, int *len);
static void print_string(va_list args, int *len);
static void print_numbers(va_list args, int *len);
static void print_charcater(va_list args, int *len);

#endif