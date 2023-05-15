/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whiler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 03:47:35 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/04/09 00:09:19 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	whiler(char **l, int y, int x)
{
	l[y][x] = 'X';
	while (y > 0)
	{
		while (x > 0)
		{
			find_zerox(l, y, x);
			x--;
		}
		x = ft_strlen(l[y - 1]);
		y--;
	}
	x = 0;
	while (l[y])
	{
		while (l[y][x])
		{
			find_zerox(l, y, x);
			x++;
		}
		x = 0;
		y++;
	}
}
