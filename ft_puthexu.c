/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:17:55 by dteruya           #+#    #+#             */
/*   Updated: 2024/11/21 17:18:27 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexu(unsigned long numb)
{
	int		result;
	char	*rest;

	result = 0;
	rest = "0123456789ABCDEF";
	if (numb >= 16)
		result = result + ft_puthexu(numb / 16);
	result = result + ft_putchar(rest[numb % 16]);
	return (result);
}
