/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:30:58 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/02/21 05:31:41 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	putptr(unsigned long long num)
{
	int		x;
	char	*str;

	str = "0123456789abcdef";
	x = 0;
	if (num > 15)
	{
		x = x + putptr(num / 16);
		x = x + putptr(num % 16);
	}
	else
		x = x + ft_putchar(str[num]);
	return (x);
}
