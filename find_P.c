/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_P.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 03:45:28 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/04/08 07:33:08 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	checker3(char **map, int y, int x)
{
	int	i;

	i = 0;
	if (map[y][x + 1] == 'X')
		i++;
	else if (map[y][x - 1] == 'X')
		i++;
	else if (map[y + 1][x] == 'X')
		i++;
	else if (map[y - 1][x] == 'X')
		i++;
	y = 0;
	if (i == 0)
		(ft_putstr_fd("invalid map\n", 2), exit (1));
}

void	find_e(char **map)
{
	int	q;
	int	w;

	w = 0;
	q = 0;
	while (map[w])
	{
		while (map[w][q])
		{
			if (map[w][q] == 'E')
				break ;
			q++;
		}
		if (map[w][q] == 'E')
			break ;
		q = 0;
		w++;
	}
	checker3(map, w, q);
}

void	find_zerox(char **l, int y, int x)
{
	while (l[y])
	{
		while (l[y][x])
		{
			if (l[y][x] == 'X' && (l[y][x + 1] != '1' && l[y][x + 1] != 'E'))
				l[y][x + 1] = 'X';
			if (l[y][x] == 'X' && (l[y][x - 1] != '1' && l[y][x - 1] != 'E'))
				l[y][x - 1] = 'X';
			if (l[y][x] == 'X' && (l[y + 1][x] != '1' && l[y + 1][x] != 'E'))
				l[y + 1][x] = 'X';
			if (l[y][x] == 'X' && (l[y - 1][x] != '1' && l[y - 1][x] != 'E'))
				l[y - 1][x] = 'X';
			x++;
		}
		x = 0;
		y++;
	}
}

void	whiler(char **l, int y, int x)
{
	l[y][x] = 'X';
	while (y > 0)
	{
		while (x > 0)
		{
			find_zerox(l, y, x);
			x--;
		}
		x = ft_strlen(l[y - 1]);
		y--;
	}
	x = 0;
	while (l[y])
	{
		while (l[y][x])
		{
			find_zerox(l, y, x);
			x++;
		}
		x = 0;
		y++;
	}
}

void	find_p(char *line)
{
	char	**l;
	int		x;
	int		y;

	l = ft_split(line, '\n');
	x = 0;
	y = 0;
	while (l[y])
	{
		while (l[y][x])
		{
			if (l[y][x] == 'P')
				break ;
			x++;
		}
		if (l[y][x] == 'P')
			break ;
		x = 0;
		y++;
	}
	whiler(l, y, x);
	find_e(l);
	checker2(l);
}
