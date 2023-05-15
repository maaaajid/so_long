/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putunsin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 09:24:42 by aelbouaa          #+#    #+#             */
/*   Updated: 2022/11/12 19:00:07 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	putunsin(unsigned int num)
{
	int	x;

	x = 0;
	if (num > 9)
	{
		x = x + putunsin(num / 10);
		x = x + putunsin(num % 10);
	}
	else
		x = x + ft_putchar(num + 48);
	return (x);
}
