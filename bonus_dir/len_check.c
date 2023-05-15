/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   len_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 03:42:47 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/02/21 13:27:45 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	len_check(char *line)
{
	int		x;
	int		len;
	int		l;
	char	**lines;

	x = 0;
	lines = ft_split(line, '\n');
	len = ft_strlen(lines[x]);
	l = len;
	while (lines[x])
	{
		len = ft_strlen(lines[x]);
		if (len != l)
			(ft_printf("you map is not rectangular\n"), exit (1));
		x++;
	}
	char_check(line);
	wall_check(lines);
}
