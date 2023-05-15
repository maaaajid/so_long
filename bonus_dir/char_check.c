/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 03:39:44 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/02/21 05:28:18 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	char_check(char *line)
{
	int	x;

	x = 0;
	while (line[x])
	{
		if (line[x] == '0' || line[x] == '1' || line[x] == '\n'
			|| line[x] == 'P' || line[x] == 'C' || line[x] == 'E')
		{
			x++;
			continue ;
		}
		else
			(ft_printf("character %c in the map", line[x]), exit (1));
	}
	char_num(line);
}
