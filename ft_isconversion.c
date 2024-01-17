/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isconversion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:28:57 by zaldhahe          #+#    #+#             */
/*   Updated: 2024/01/15 18:28:59 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_isconversion(char c)
{
	if (c == 'c')
		return (1);
	else if (c == 's')
		return (1);
	else if (c == 'p')
		return (1);
	else if (c == 'd')
		return (1);
	else if (c == 'i')
		return (1);
	else if (c == 'u')
		return (1);
	else if (c == 'x')
		return (1);
	else if (c == 'X')
		return (1);
	else if (c == '%')
		return (1);
	return (0);
}
