/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 08:45:47 by aelbouaa          #+#    #+#             */
/*   Updated: 2022/11/13 17:51:12 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	putnbr(long int num)
{
	int	x;

	x = 0;
	if (num < 0)
	{
		x = x + ft_putchar('-');
		num = num * -1;
	}
	if (num > 9)
	{
		x = x + putnbr(num / 10);
		x = x + putnbr(num % 10);
	}
	else
		x = x + ft_putchar(num + 48);
	return (x);
}
