/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:46:36 by dteruya           #+#    #+#             */
/*   Updated: 2024/12/04 09:53:31 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_verify(const char tp, va_list args)
{
	int	count;

	count = 0;
	if (tp == 'c')
		count = count + ft_putchar(va_arg(args, int));
	if (tp == 's')
		count = count + ft_putstr(va_arg(args, char *));
	if (tp == 'd' || tp == 'i')
		count = count + ft_putnbr(va_arg(args, int));
	if (tp == 'u')
		count = count + ft_putunbr(va_arg(args, unsigned int));
	if (tp == 'p')
		count = count + ft_puthex(va_arg(args, void *));
	if (tp == 'x')
		count = count + ft_puthexl(va_arg(args, unsigned int));
	if (tp == 'X')
		count = count + ft_puthexu(va_arg(args, unsigned int));
	if (tp == '%')
		count = count + ft_putchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	char	*type;
	int		count;

	count = 0;
	type = "cspdiuxX%";
	va_start(args, format);
	while (*format)
	{
		if ((*format == '%') && ft_strchr(type, *(format + 1)))
		{
			count = count + ft_verify(*(format + 1), args);
			format++;
		}
		else
			count = count + ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}
