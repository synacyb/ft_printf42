#include "header.h"
#include <stdio.h>

int check_character(char c, va_list args)
{
	int len;

	len = 0;
	if (c == 'c')
		len += ft_putchar_fd((char)va_arg(args, int), 1);
	else if (c == 'd' || c == 'i')
		len += ft_putnbr_fd(va_arg(args, int), 1);
	else if (c == 'u')
		len += unsigned_int(va_arg(args, unsigned int), 1);
	else if (c == 's')
		len += ft_putstr_fd(va_arg(args, char *), 1);
	else if (c == 'x')
		len += puthxs_lower(va_arg(args, unsigned int), 1);
	else if (c == '%')
		len += write(1, "%", 1);
	return (len);
}

static int valid_format(char c)
{
	int i = 0;
	char *a = "cdisupxX%";
	while (a[i])
	{
		if (c == a[i])
			return (1);
		i++;        
	}
	return (0);
}
int ft_printf(const char *format, ...)
{
	int     len;
	va_list args;
	if(format == NULL)
		return -1;
	va_start(args, format);

	len = 0;
	while (*format != '\0')
	{
		if (*format == '%' && valid_format(*(format + 1)) == 1)
		{
			format++;
			len += check_character(*format, args);
			if (len < 0)
				return -1;
		}
		else if (*format != '%')
		{
			len += ft_putchar_fd(*format, 1);
			if(len < 0)
				return -1;
		}
		format++;
	}
	va_end(args);
	return (len);
}