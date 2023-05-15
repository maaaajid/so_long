/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 03:44:36 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/04/09 00:10:41 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

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
		mlx_hook(s.new_window, 2, 0, move, &s);
		s.i = mlx_string_put(s.p, s.new_window, 0, 10,
				0x0000FF00, "move:0");
		mlx_loop_hook(s.p, &mtoinn, &s);
		mlx_hook(s.new_window, 17, 0, ft_close, &s);
		mlx_loop(s.p);
	}
	else
		ft_printf("please put map's name\n");
}
