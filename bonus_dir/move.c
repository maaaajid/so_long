/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 04:25:28 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/05/12 02:12:00 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	up(t_long *s)
{
	if (s->lines[s->y - 1][s->x] == '0'
		|| s->lines[s->y - 1][s->x] == 'C')
	{
		if (s->lines[s->y][s->x] == '2')
			s->lines[s->y - 1][s->x] = '2';
		else
			s->lines[s->y - 1][s->x] = 'P';
		s->lines[s->y][s->x] = '0';
		string(s);
		s->y--;
	}
	else if (s->lines[s->y - 1][s->x] == 'E'
		|| s->lines[s->y - 1][s->x] == 'e')
	{
		if (!find_c(s))
		{
			string(s);
			s->lines[s->y - 1][s->x] = 'P';
			s->lines[s->y][s->x] = '0';
			ex(s);
			s->y--;
		}
	}
}

void	duwn(t_long *s)
{
	if (s->lines[s->y + 1][s->x] == '0'
		|| s->lines[s->y + 1][s->x] == 'C')
	{
		if (s->lines[s->y][s->x] == '2')
			s->lines[s->y + 1][s->x] = '2';
		else
			s->lines[s->y + 1][s->x] = 'P';
		s->lines[s->y][s->x] = '0';
		string(s);
	}
	else if (s->lines[s->y + 1][s->x] == 'E'
		|| s->lines[s->y + 1][s->x] == 'e')
	{
		if (!find_c(s))
		{
			string(s);
			s->lines[s->y + 1][s->x] = 'P';
			s->lines[s->y][s->x] = '0';
			ex(s);
		}
	}
}

void	right(t_long *s)
{
	if (s->lines[s->y][s->x + 1] == '0'
		|| s->lines[s->y][s->x + 1] == 'C')
	{
		string(s);
		s->lines[s->y][s->x + 1] = 'P';
		s->lines[s->y][s->x] = '0';
	}
	else if (s->lines[s->y][s->x + 1] == 'E'
		|| s->lines[s->y][s->x + 1] == 'e')
	{
		if (!find_c(s))
		{
			string(s);
			s->lines[s->y][s->x + 1] = 'P';
			s->lines[s->y][s->x] = '0';
			ex(s);
		}
	}
}

void	left(t_long *s)
{
	if (s->lines[s->y][s->x - 1] == '0'
		||s->lines[s->y][s->x - 1] == 'C')
	{
		string(s);
		s->lines[s->y][s->x - 1] = '2';
		s->lines[s->y][s->x] = '0';
		s->x--;
	}
	else if (s->lines[s->y][s->x - 1] == 'E'
		|| s->lines[s->y][s->x - 1] == 'e')
	{
		if (!find_c(s))
		{
			string(s);
			s->lines[s->y][s->x - 1] = '2';
			s->lines[s->y][s->x] = '0';
			ex(s);
			s->x--;
		}
	}
}

int	move(int x, t_long *s)
{
	findplayer(s);
	if (x == 126 || x == 13)
		up(s);
	else if (x == 125 || x == 1)
		duwn(s);
	else if (x == 124 || x == 2)
		right(s);
	else if (x == 123 || x == 0)
		left(s);
	else if (x == 53)
	{
		mlx_destroy_window(s->p, s->new_window);
		exit(0);
	}
	f_while(s);
	return (0);
}
