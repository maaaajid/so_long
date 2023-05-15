/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wall_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 03:43:34 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/02/21 08:35:28 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	wall_check(char **lines)
{
	int	x;
	int	t;
	int	len;

	len = ft_strlen(lines[0]);
	x = 0;
	t = 0;
	while (lines[0][x])
		if (lines[0][x++] != '1')
			(ft_printf("invalid map\n"), exit (1));
	while (lines[t])
	{
		if (lines[t][0] != '1' || lines[t][len - 1] != '1')
			(printf("invalid map\n"), exit (1));
		t++;
	}
	x = 0;
	while (lines[t - 1][x])
		if (lines[t - 1][x++] != '1')
			(ft_printf("invalid map\n"), exit (1));
	x = 0;
	while (lines[x])
		free(lines[x++]);
	free(lines);
}
