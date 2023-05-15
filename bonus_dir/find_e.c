/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_e.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 03:49:38 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/02/21 04:16:50 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	find_e(char **map)
{
	int	q;
	int	w;

	w = 0;
	q = 0;
	while (map[w])
	{
		while (map[w][q])
		{
			if (map[w][q] == 'E')
				break ;
			q++;
		}
		if (map[w][q] == 'E')
			break ;
		q = 0;
		w++;
	}
	checker3(map, w, q);
}
