/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_num.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 03:40:57 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/02/21 03:46:37 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	char_num(char *line)
{
	int	x;
	int	p;
	int	c;
	int	e;

	x = 0;
	p = 0;
	e = 0;
	c = 0;
	while (line[x])
	{
		if (line[x] == 'C')
			c++;
		else if (line[x] == 'P')
			p++;
		else if (line[x] == 'E')
			e++;
		x++;
	}
	if (p != 1 || c < 1 || e != 1)
		(ft_printf("invalid map\n"), exit (1));
}
