/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:04:21 by dteruya           #+#    #+#             */
/*   Updated: 2024/11/21 13:42:29 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int		count;
	long	numb;

	count = 0;
	numb = (long)nb;
	if (numb < 0)
	{
		numb = numb * (-1);
		count = count + ft_putchar('-');
	}
	if (numb > 9)
		count = count + ft_putnbr(numb / 10);
	count = count + ft_putchar(numb % 10 + '0');
	return (count);
}
