/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mxfti.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 01:54:44 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/04/08 07:22:52 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

int	find_c(t_long *s)
{
	int	q;
	int	w;

	w = 0;
	q = 0;
	while (s->lines[w])
	{
		while (s->lines[w][q])
		{
			if (s->lines[w][q] == 'C')
				return (1);
			q++;
		}
		q = 0;
		w++;
	}
	return (0);
}

void	findplayer(t_long *s, char c)
{
	while (s->lines[s->y])
	{
		while (s->lines[s->y][s->x])
		{
			if (s->lines[s->y][s->x] == c)
				break ;
			s->x++;
		}
		if (s->lines[s->y][s->x] == c)
			break ;
		s->x = 0;
		s->y++;
	}
}

void	ft_free(t_long *s)
{
	s->y = 0;
	while (s->lines[s->y])
	{
		free (s->lines[s->y]);
		s->y++;
	}
	free(s->lines);
}

void	string(t_long *s)
{
	char	*moves;
	char	*str;

	str = ft_strdup("move:");
	moves = ft_strjoin(str, ft_itoa(s->j++));
	ft_printf("%s\n", moves);
	free(moves);
}

void	mxfti(t_long *s)
{
	s->ima_wall = mlx_xpm_file_to_image(s->p,
			"./image/manda_wall.xpm", &s->a, &s->b);
	s->floor = mlx_xpm_file_to_image(s->p,
			"./image/manda_floor.xpm", &s->a, &s->b);
	s->coin1 = mlx_xpm_file_to_image(s->p,
			"./image/manda_coin.xpm", &s->a, &s->b);
	s->player1 = mlx_xpm_file_to_image(s->p,
			"./image/manda_player.xpm", &s->a, &s->b);
	s->door = mlx_xpm_file_to_image(s->p,
			"./image/manda_door.xpm", &s->a, &s->b);
	s->new_window = mlx_new_window(s->p,
			s->num * 100, s->lnum * 100, "so_long");
	if (!s->floor || !s->coin1 || !s->player1
		|| !s->new_window || !s->ima_wall)
		(ft_printf("missing image\n"), exit (1));
}
