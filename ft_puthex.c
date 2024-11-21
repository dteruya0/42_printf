/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:49:19 by dteruya           #+#    #+#             */
/*   Updated: 2024/11/21 16:48:50 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthex_help(unsigned long numb)
{
	int		result;
	char	*rest;

	result = 0;
	rest = "0123456789abcdef";
	if (numb >= 16)
		result = result + ft_puthex_help(numb / 16);
	result = result + ft_putchar(rest[numb % 16]);
	return (result);
}

int	ft_puthex(void *pointer)
{
	int				count;
	unsigned long	quotient;

	quotient = (unsigned long)pointer;
	count = 0;
	if (pointer == 0)
		return (ft_putstr("(nil)"));
	count = ft_putstr("0x");
	count = count + ft_puthex_help(quotient);
	return (count);
}
