/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findplayer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 01:56:46 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/02/21 05:25:12 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	findplayer(t_long *s)
{
	while (s->lines[s->y])
	{
		while (s->lines[s->y][s->x])
		{
			if (s->lines[s->y][s->x] == 'P' || s->lines[s->y][s->x] == '2')
				break ;
			s->x++;
		}
		if (s->lines[s->y][s->x] == 'P' || s->lines[s->y][s->x] == '2')
			break ;
		s->x = 0;
		s->y++;
	}
}
