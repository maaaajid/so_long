/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puthex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:01:36 by aelbouaa          #+#    #+#             */
/*   Updated: 2022/11/13 17:53:57 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	puthex(unsigned int num, char c)
{
	int		x;
	char	*str;

	x = 0;
	if (c == 'x')
		str = "0123456789abcdef";
	if (c == 'X')
		str = "0123456789ABCDEF";
	if (num > 15)
	{
		x = x + puthex(num / 16, c);
		x = x + puthex(num % 16, c);
	}
	else
		x = x + ft_putchar(str[num]);
	return (x);
}
