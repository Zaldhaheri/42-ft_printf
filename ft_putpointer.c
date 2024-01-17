/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:20:07 by zaldhahe          #+#    #+#             */
/*   Updated: 2024/01/17 18:38:31 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printzeros(unsigned int x)
{
	unsigned int	n;
	unsigned int	i;

	n = 0;
	while (x > 0)
	{
		n++;
		x /= 16;
	}
	i = 8 - n;
	while (i > 0)
	{
		i--;
		ft_putchar('0');
	}
	return (8 - n);
}

int	ft_putpointer(unsigned long v)
{
	unsigned int	n;

	n = 2;
	ft_putstr("0x");
	n += ft_puthex_lower(v);
	return (n);
}
	//n += ft_printzeros(v);
