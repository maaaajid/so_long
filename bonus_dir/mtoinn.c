/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtoinn.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 04:24:15 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/02/21 13:53:48 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

int	mtoinn(t_long *s)
{
	while (s->lines[s->y])
	{
		while (s->lines[s->y][s->x])
		{
			if (s->lines[s->y][s->x] == 'E' && find_c(s) == 0)
				openbox(s);
			if (s->lines[s->y][s->x] == 'C')
				coinmove(s);
			else if (s->lines[s->y][s->x] == 'P')
				movement(s);
			else if (s->lines[s->y][s->x] == '2')
				moving(s);
			s->x++;
		}
		s->x = 0;
		s->y++;
	}
	s->y = 0;
	return (0);
}
