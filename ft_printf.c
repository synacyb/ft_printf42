#include "header.h"
#include <stdio.h>

static void	check(va_list args, char c, int *len)
{
	
	if (c == 's')
		print_string(args, len);
	if (c == 'd')
		print_numbers(args, len);
	if(c == 'c')
		print_charcater(args, len);
}

static void print_charcater(va_list args, int *len)
{
	char c = (char )va_arg(args, int);
	ft_putchar_fd(c, 1);
	(*len)++;
}
static void print_string(va_list args, int *len)
{
	int num;
    char *s = va_arg(args, char*);
    ft_putstr_fd(s, 1);
	num = ft_strlen(s);
	*len += num;
}

static void print_numbers(va_list args, int *len)
{
    int n = va_arg(args, int);
    ft_putnbr_fd(n, 1);

}

int ft_printf(const char *format, ...) 
{
    int len;
    va_list args;
    va_start(args, format);

    len = 0;
    while (*format != '\0') 
	{
        if (*format == '%')
		{
            format++;
			check(args, *format, &len);
        }
		else
		{
			write(1, format, 1);
			len++;
		}
        format++;
    }
    va_end(args);
    return len;
}