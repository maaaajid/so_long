/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 03:50:45 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/02/21 11:03:57 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	checker3(char **map, int y, int x)
{
	int	i;

	i = 0;
	if (map[y][x + 1] == 'X')
		i++;
	else if (map[y][x - 1] == 'X')
		i++;
	else if (map[y + 1][x] == 'X')
		i++;
	else if (map[y - 1][x] == 'X')
		i++;
	if (i == 0)
		(ft_printf("invalid map\n"), exit(1));
}
