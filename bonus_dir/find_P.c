/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_P.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 03:45:28 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/02/21 04:19:17 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	find_p(char *line)
{
	char	**l;
	int		x;
	int		y;

	l = ft_split(line, '\n');
	x = 0;
	y = 0;
	while (l[y])
	{
		while (l[y][x])
		{
			if (l[y][x] == 'P')
				break ;
			x++;
		}
		if (l[y][x] == 'P')
			break ;
		x = 0;
		y++;
	}
	whiler(l, y, x);
	find_e(l);
	checker2(l);
}
