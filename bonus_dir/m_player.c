/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_player.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 02:51:55 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/02/21 04:43:26 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	flo_pla2(t_long *s)
{
	mlx_put_image_to_window(s->p,
		s->new_window, s->floor, s->x * 50, s->y * 50);
	mlx_put_image_to_window(s->p,
		s->new_window, s->player2, s->x * 50, s->y * 50);
}

void	flo_pla3(t_long *s)
{
	mlx_put_image_to_window(s->p,
		s->new_window, s->floor, s->x * 50, s->y * 50);
	mlx_put_image_to_window(s->p,
		s->new_window, s->player3, s->x * 50, s->y * 50);
}

void	flo_pla4(t_long *s)
{
	mlx_put_image_to_window(s->p,
		s->new_window, s->floor, s->x * 50, s->y * 50);
	mlx_put_image_to_window(s->p,
		s->new_window, s->player4, s->x * 50, s->y * 50);
}

void	flo_pla5(t_long *s)
{
	mlx_put_image_to_window(s->p,
		s->new_window, s->floor, s->x * 50, s->y * 50);
	mlx_put_image_to_window(s->p,
		s->new_window, s->player5, s->x * 50, s->y * 50);
}
