/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:41:40 by dteruya           #+#    #+#             */
/*   Updated: 2024/11/21 13:50:34 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int nb)
{
	int		count;
	long	numb;

	count = 0;
	numb = (long)nb;
	if (numb > 9)
		count = count + ft_putunbr(numb / 10);
	count = count + ft_putchar(numb % 10 + '0');
	return (count);
}
