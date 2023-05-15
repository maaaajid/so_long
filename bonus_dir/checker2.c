/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 03:52:54 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/02/21 11:07:02 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	checker2(char **map)
{
	int	y;
	int	x;

	x = 0;
	y = 0;
	while (map[y])
	{
		while (map[y][x])
		{
			if (map[y][x] == 'P' || map[y][x] == 'C')
				(ft_printf("invalid map\n"), exit (1));
			x++;
		}
		x = 0;
		y++;
	}
	y = 0;
	while (map[y])
	{
		free(map[y++]);
	}
	free(map);
}
