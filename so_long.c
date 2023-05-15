/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 03:44:36 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/04/08 07:38:32 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	zeronull(t_long *s)
{
	s->a = 0;
	s->b = 0;
	s->lnum = 0;
	s->num = 0;
	s->y = 0;
	s->x = 0;
	s->move = 0;
	s->j = 1;
}

int	count_lines(char **lines)
{
	int	y;

	y = 1;
	while (lines[y])
		y++;
	return (y);
}

int	ber_check(char *map_n)
{
	int	x;

	x = ft_strlen(map_n);
	if (map_n[x - 4] == '.' && map_n[x - 3] == 'b'
		&& map_n[x - 2] == 'e' && map_n[x - 1] == 'r')
		return (1);
	else
		(ft_putstr_fd("your map shoud contain .ber in the end\n", 2), exit(1));
}

void	checker2(char **map)
{
	int	y;
	int	x;

	x = 0;
	y = 0;
	while (map[y])
	{
		while (map[y][x])
		{
			if (map[y][x] == 'P' || map[y][x] == 'C')
				(ft_putstr_fd("invalid map\n", 2), exit (1));
			x++;
		}
		x = 0;
		y++;
	}
	y = 0;
	while (map[y])
	{
		free(map[y++]);
	}
	free(map);
}

int	main(int ac, char **av)
{
	t_long	s;

	zeronull(&s);
	if (ac == 2)
	{
		s.line = readmap(av[1]);
		s.lines = ft_split(s.line, '\n');
		free(s.line);
		s.lnum = count_lines(s.lines);
		s.num = ft_strlen(s.lines[0]);
		s.p = mlx_init();
		mxfti(&s);
		f_while(&s);
		mlx_hook(s.new_window, 3, 0, move, &s);
		mlx_hook(s.new_window, 17, 0, ft_close, &s);
		mlx_loop(s.p);
	}
	else
		ft_putstr_fd("please put map's name\n", 2);
}
