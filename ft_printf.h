/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:46:30 by dteruya           #+#    #+#             */
/*   Updated: 2024/11/21 17:22:16 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_strlen(const char *str);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int nb);
char	*ft_strchr(const char *str, char c);
int		ft_putunbr(unsigned int nb);
int		ft_puthex(void *pointer);
int		ft_puthexl(unsigned long numb);
int		ft_puthexu(unsigned long numb);

#endif