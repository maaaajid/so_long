/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:00:06 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/02/21 12:19:51 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	string(t_long *s)
{
	char	*moves;
	char	*str;

	str = ft_strdup("move:");
	moves = ft_strjoin(str, ft_itoa(s->j++));
	mlx_put_image_to_window(s->p, s->new_window, s->ima_wall, 0, 0);
	mlx_put_image_to_window(s->p, s->new_window, s->ima_wall, 50, 0);
	s->i = mlx_string_put(s->p, s->new_window, 0, 10,
			0x0000FF00, moves);
	free(moves);
}
