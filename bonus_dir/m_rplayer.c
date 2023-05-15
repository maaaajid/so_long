/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_rplayer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 03:04:03 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/02/21 04:45:05 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	flo_rpla2(t_long *s)
{
	mlx_put_image_to_window(s->p,
		s->new_window, s->floor, s->x * 50, s->y * 50);
	mlx_put_image_to_window(s->p,
		s->new_window, s->rplayer2, s->x * 50, s->y * 50);
}

void	flo_rpla3(t_long *s)
{
	mlx_put_image_to_window(s->p,
		s->new_window, s->floor, s->x * 50, s->y * 50);
	mlx_put_image_to_window(s->p,
		s->new_window, s->rplayer3, s->x * 50, s->y * 50);
}

void	flo_rpla4(t_long *s)
{
	mlx_put_image_to_window(s->p,
		s->new_window, s->floor, s->x * 50, s->y * 50);
	mlx_put_image_to_window(s->p,
		s->new_window, s->rplayer4, s->x * 50, s->y * 50);
}

void	flo_rpla5(t_long *s)
{
	mlx_put_image_to_window(s->p,
		s->new_window, s->floor, s->x * 50, s->y * 50);
	mlx_put_image_to_window(s->p,
		s->new_window, s->rplayer5, s->x * 50, s->y * 50);
}
