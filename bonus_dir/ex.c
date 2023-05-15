/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 04:36:39 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/05/12 02:12:10 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	ex(t_long *s)
{
	ft_free(s);
	mlx_destroy_window(s->p, s->new_window);
	exit(0);
}

int	ft_close(t_long *s)
{
	ft_free(s);
	exit (0);
}
