/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 08:05:13 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/02/21 10:33:37 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

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
