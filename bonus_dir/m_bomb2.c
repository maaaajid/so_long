/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_bomb2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 02:09:10 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/04/10 04:07:03 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	bomb6(t_long *s)
{
	mlx_put_image_to_window(s->p,
		s->new_window, s->floor, s->x * 50, s->y * 50);
	mlx_put_image_to_window(s->p,
		s->new_window, s->door, s->x * 50, s->y * 50);
	mlx_put_image_to_window(s->p,
		s->new_window, s->bomb6, s->x * 50, s->y * 50);
}

void	bomb7(t_long *s)
{
	mlx_put_image_to_window(s->p,
		s->new_window, s->floor, s->x * 50, s->y * 50);
	mlx_put_image_to_window(s->p,
		s->new_window, s->bomb7, s->x * 50, s->y * 50);
}

void	bomb8(t_long *s)
{
	mlx_put_image_to_window(s->p,
		s->new_window, s->floor, s->x * 50, s->y * 50);
	mlx_put_image_to_window(s->p,
		s->new_window, s->prize, s->x * 50, s->y * 50);
	mlx_put_image_to_window(s->p,
		s->new_window, s->bomb8, s->x * 50, s->y * 50);
}

void	bomb9(t_long *s)
{
	mlx_put_image_to_window(s->p,
		s->new_window, s->floor, s->x * 50, s->y * 50);
	mlx_put_image_to_window(s->p,
		s->new_window, s->prize, s->x * 50, s->y * 50);
	mlx_put_image_to_window(s->p,
		s->new_window, s->bomb9, s->x * 50, s->y * 50);
}

void	bomb10(t_long *s)
{
	mlx_put_image_to_window(s->p,
		s->new_window, s->floor, s->x * 50, s->y * 50);
	mlx_put_image_to_window(s->p,
		s->new_window, s->bomb10, s->x * 50, s->y * 50);
	mlx_put_image_to_window(s->p,
		s->new_window, s->floor, s->x * 50, s->y * 50);
	mlx_put_image_to_window(s->p,
		s->new_window, s->prize, s->x * 50, s->y * 50);
}
