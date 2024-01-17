/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:15:14 by zaldhahe          #+#    #+#             */
/*   Updated: 2024/01/17 18:32:37 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printhex_lower(unsigned int x)
{
	if (x > 15)
		ft_printhex_lower(x / 16);
	write (1, &"0123456789abcdef"[x % 16], 1);
}

int	ft_puthex_lower(unsigned int x)
{
	int	n;

	n = 0;
	ft_printhex_lower(x);
	if (x == 0)
		return (1);
	while (x > 0)
	{
		x /= 16;
		n++;
	}
	return (n);
}
