/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mxfti.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 01:54:44 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/05/12 01:49:41 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	mxfti4(t_long *s)
{
	s->bomb10 = mlx_xpm_file_to_image(s->p,
			"./image_bonus/bom10.xpm", &s->a, &s->b);
	s->prize = mlx_xpm_file_to_image(s->p,
			"./image_bonus/prize2.xpm", &s->a, &s->b);
	s->new_window = mlx_new_window(s->p,
			s->num * 50, s->lnum * 50, "so_long");
	if (!s->floor || !s->coin1 || !s->coin2 || !s->coin3 || !s->coin4
		|| !s->coin5 || !s->coin6 || !s->player1 || !s->player2 || !s->player3
		|| !s->player5 || !s->rplayer1 || !s->rplayer2 || !s->rplayer3
		|| !s->rplayer4 || !s->player4 || !s->rplayer5 || !s->door
		|| !s->bomb1 || !s->bomb2 || !s->bomb3 || !s->bomb4
		|| !s->bomb5 || !s->bomb6 || !s->bomb7 || !s->bomb8
		|| !s->bomb9 || !s->bomb10 || !s->prize || !s->new_window)
		(ft_printf("missing image\n"), exit (1));
}

void	mxfti2(t_long *s)
{
	s->door = mlx_xpm_file_to_image(s->p,
			"./image_bonus/box.xpm", &s->a, &s->b);
	s->bomb1 = mlx_xpm_file_to_image(s->p,
			"./image_bonus/bom1.xpm", &s->a, &s->b);
	s->bomb2 = mlx_xpm_file_to_image(s->p,
			"./image_bonus/bom2.xpm", &s->a, &s->b);
	s->bomb3 = mlx_xpm_file_to_image(s->p,
			"./image_bonus/bom3.xpm", &s->a, &s->b);
	s->bomb4 = mlx_xpm_file_to_image(s->p,
			"./image_bonus/bom4.xpm", &s->a, &s->b);
	s->bomb5 = mlx_xpm_file_to_image(s->p,
			"./image_bonus/bom5.xpm", &s->a, &s->b);
	s->bomb6 = mlx_xpm_file_to_image(s->p,
			"./image_bonus/bom6.xpm", &s->a, &s->b);
	s->bomb7 = mlx_xpm_file_to_image(s->p,
			"./image_bonus/bom7.xpm", &s->a, &s->b);
	s->bomb8 = mlx_xpm_file_to_image(s->p,
			"./image_bonus/bom8.xpm", &s->a, &s->b);
	s->bomb9 = mlx_xpm_file_to_image(s->p,
			"./image_bonus/bom9.xpm", &s->a, &s->b);
}

void	mxfti3(t_long *s)
{
	s->player1 = mlx_xpm_file_to_image(s->p,
			"./image_bonus/char1.xpm", &s->a, &s->b);
	s->player2 = mlx_xpm_file_to_image(s->p,
			"./image_bonus/char2.xpm", &s->a, &s->b);
	s->player3 = mlx_xpm_file_to_image(s->p,
			"./image_bonus/char3.xpm", &s->a, &s->b);
	s->player4 = mlx_xpm_file_to_image(s->p,
			"./image_bonus/char4.xpm", &s->a, &s->b);
	s->player5 = mlx_xpm_file_to_image(s->p,
			"./image_bonus/char5.xpm", &s->a, &s->b);
	s->rplayer1 = mlx_xpm_file_to_image(s->p,
			"./image_bonus/char11.xpm", &s->a, &s->b);
	s->rplayer2 = mlx_xpm_file_to_image(s->p,
			"./image_bonus/char22.xpm", &s->a, &s->b);
	s->rplayer3 = mlx_xpm_file_to_image(s->p,
			"./image_bonus/char33.xpm", &s->a, &s->b);
	s->rplayer4 = mlx_xpm_file_to_image(s->p,
			"./image_bonus/char44.xpm", &s->a, &s->b);
	s->rplayer5 = mlx_xpm_file_to_image(s->p,
			"./image_bonus/char55.xpm", &s->a, &s->b);
}

void	mxfti(t_long *s)
{
	s->ima_wall = mlx_xpm_file_to_image(s->p,
			"./image_bonus/wall2.xpm", &s->a, &s->b);
	s->floor = mlx_xpm_file_to_image(s->p,
			"./image_bonus/floor4.xpm", &s->a, &s->b);
	s->coin1 = mlx_xpm_file_to_image(s->p,
			"./image_bonus/c11.xpm", &s->a, &s->b);
	s->coin2 = mlx_xpm_file_to_image(s->p,
			"./image_bonus/c22.xpm", &s->a, &s->b);
	s->coin3 = mlx_xpm_file_to_image(s->p,
			"./image_bonus/c33.xpm", &s->a, &s->b);
	s->coin4 = mlx_xpm_file_to_image(s->p,
			"./image_bonus/c44.xpm", &s->a, &s->b);
	s->coin5 = mlx_xpm_file_to_image(s->p,
			"./image_bonus/c55.xpm", &s->a, &s->b);
	s->coin6 = mlx_xpm_file_to_image(s->p,
			"./image_bonus/c66.xpm", &s->a, &s->b);
	mxfti2(s);
	mxfti3(s);
	mxfti4(s);
}
