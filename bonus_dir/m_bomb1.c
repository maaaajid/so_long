/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_bomb1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 02:03:32 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/02/21 04:35:04 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	bomb1(t_long *s)
{
	mlx_put_image_to_window(s->p,
		s->new_window, s->floor, s->x * 50, s->y * 50);
	mlx_put_image_to_window(s->p,
		s->new_window, s->door, s->x * 50, s->y * 50);
	mlx_put_image_to_window(s->p,
		s->new_window, s->bomb1, s->x * 50, s->y * 50);
}

void	bomb2(t_long *s)
{
	mlx_put_image_to_window(s->p,
		s->new_window, s->floor, s->x * 50, s->y * 50);
	mlx_put_image_to_window(s->p,
		s->new_window, s->door, s->x * 50, s->y * 50);
	mlx_put_image_to_window(s->p,
		s->new_window, s->bomb2, s->x * 50, s->y * 50);
}

void	bomb3(t_long *s)
{
	mlx_put_image_to_window(s->p,
		s->new_window, s->floor, s->x * 50, s->y * 50);
	mlx_put_image_to_window(s->p,
		s->new_window, s->door, s->x * 50, s->y * 50);
	mlx_put_image_to_window(s->p,
		s->new_window, s->bomb3, s->x * 50, s->y * 50);
}

void	bomb4(t_long *s)
{
	mlx_put_image_to_window(s->p,
		s->new_window, s->floor, s->x * 50, s->y * 50);
	mlx_put_image_to_window(s->p,
		s->new_window, s->door, s->x * 50, s->y * 50);
	mlx_put_image_to_window(s->p,
		s->new_window, s->bomb4, s->x * 50, s->y * 50);
}

void	bomb5(t_long *s)
{
	mlx_put_image_to_window(s->p,
		s->new_window, s->floor, s->x * 50, s->y * 50);
	mlx_put_image_to_window(s->p,
		s->new_window, s->door, s->x * 50, s->y * 50);
	mlx_put_image_to_window(s->p,
		s->new_window, s->bomb5, s->x * 50, s->y * 50);
}
