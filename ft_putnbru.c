/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:18:30 by zaldhahe          #+#    #+#             */
/*   Updated: 2024/01/17 18:31:16 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printnumu(unsigned int x)
{
	if (x > 9)
		ft_printnumu(x / 10);
	write(1, &"0123456789"[x % 10], 1);
}

int	ft_putnbru(unsigned int x)
{
	int	n;

	n = 0;
	ft_printnumu(x);
	if (x == 0)
		return (1);
	while (x)
	{
		x /= 10;
		n++;
	}
	return (n);
}
