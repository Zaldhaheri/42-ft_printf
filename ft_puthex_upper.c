/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:16:18 by zaldhahe          #+#    #+#             */
/*   Updated: 2024/01/17 18:32:27 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printhex_upper(unsigned int x)
{
	if (x > 15)
		ft_printhex_upper(x / 16);
	write (1, &"0123456789ABCDEF"[x % 16], 1);
}

int	ft_puthex_upper(unsigned int x)
{
	int	n;

	n = 0;
	ft_printhex_upper(x);
	if (x == 0)
		return (1);
	while (x > 0)
	{
		x /= 16;
		n++;
	}
	return (n);
}
