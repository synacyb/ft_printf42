#include "ft_printf.h"
#include <stdio.h>

static	int	check_character(char c, va_list args)
{
	int	len;

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
	else if (c == 'X')
		len += puthxs_upper(va_arg(args, unsigned int), 1);
	else if (c == '%')
		len += write(1, "%", 1);
	return (len);
}

static	int	valid_format(char c)
{
	int		i;
	char	*a;

	i = 0;
	a = "cspdiuxX%";
	while (a[i])
	{
		if (c == a[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	va_list	args;

	va_start (args, format);
	len = 0;
	if (format == NULL || write(1, "", 0) == -1)
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%' && valid_format(*(format + 1)) == 1)
		{
			format++;
			len += check_character(*format, args);
		}
		else if (*format != '%')
			len += ft_putchar_fd(*format, 1);
		format++;
	}
	va_end (args);
	return (len);
}
