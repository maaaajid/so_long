/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anime.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 02:20:54 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/04/08 07:23:37 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	flo_pla(t_long *s)
{
	mlx_put_image_to_window(s->p,
		s->new_window, s->floor, s->x * 100, s->y * 100);
	mlx_put_image_to_window(s->p,
		s->new_window, s->player1, s->x * 100, s->y * 100);
}

void	flo_door(t_long *s)
{
	mlx_put_image_to_window(s->p,
		s->new_window, s->floor, s->x * 100, s->y * 100);
	mlx_put_image_to_window(s->p,
		s->new_window, s->door, s->x * 100, s->y * 100);
}

void	flo_coin(t_long *s)
{
	mlx_put_image_to_window(s->p,
		s->new_window, s->floor, s->x * 100, s->y * 100);
	mlx_put_image_to_window(s->p,
		s->new_window, s->coin1, s->x * 100, s->y * 100);
}

void	f_while(t_long *s)
{
	while (s->lines[s->y])
	{
		while (s->lines[s->y][s->x])
		{
			if (s->lines[s->y][s->x] == '1')
				mlx_put_image_to_window(s->p,
					s->new_window, s->ima_wall, s->x * 100, s->y * 100);
			else if (s->lines[s->y][s->x] == '0')
				mlx_put_image_to_window(s->p,
					s->new_window, s->floor, s->x * 100, s->y * 100);
			else if (s->lines[s->y][s->x] == 'C')
				flo_coin(s);
			else if (s->lines[s->y][s->x] == 'P')
				flo_pla(s);
			else if (s->lines[s->y][s->x] == 'E')
				flo_door(s);
			s->x++;
		}
		s->x = 0;
		s->y++;
	}
	s->y = 0;
}
