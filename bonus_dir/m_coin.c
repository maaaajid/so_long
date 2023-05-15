/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_coin.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 02:41:28 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/02/21 04:41:44 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	flo_coin2(t_long *s)
{
	mlx_put_image_to_window(s->p,
		s->new_window, s->floor, s->x * 50, s->y * 50);
	mlx_put_image_to_window(s->p,
		s->new_window, s->coin2, s->x * 50, s->y * 50);
}

void	flo_coin3(t_long *s)
{
	mlx_put_image_to_window(s->p,
		s->new_window, s->floor, s->x * 50, s->y * 50);
	mlx_put_image_to_window(s->p,
		s->new_window, s->coin3, s->x * 50, s->y * 50);
}

void	flo_coin4(t_long *s)
{
	mlx_put_image_to_window(s->p,
		s->new_window, s->floor, s->x * 50, s->y * 50);
	mlx_put_image_to_window(s->p,
		s->new_window, s->coin4, s->x * 50, s->y * 50);
}

void	flo_coin5(t_long *s)
{
	mlx_put_image_to_window(s->p,
		s->new_window, s->floor, s->x * 50, s->y * 50);
	mlx_put_image_to_window(s->p,
		s->new_window, s->coin5, s->x * 50, s->y * 50);
}

void	flo_coin6(t_long *s)
{
	mlx_put_image_to_window(s->p,
		s->new_window, s->floor, s->x * 50, s->y * 50);
	mlx_put_image_to_window(s->p,
		s->new_window, s->coin6, s->x * 50, s->y * 50);
}
