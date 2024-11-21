/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:50:11 by dteruya           #+#    #+#             */
/*   Updated: 2024/11/21 17:22:44 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexl(unsigned long numb)
{
	int		result;
	char	*rest;

	result = 0;
	rest = "0123456789abcdef";
	if (numb >= 16)
		result = result + ft_puthexl(numb / 16);
	result = result + ft_putchar(rest[numb % 16]);
	return (result);
}
