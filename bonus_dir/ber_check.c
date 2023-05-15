/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ber_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 03:36:37 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/02/21 03:42:44 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

int	ber_check(char *map_n)
{
	int	x;

	x = ft_strlen(map_n);
	if (map_n[x - 4] == '.' && map_n[x - 3] == 'b'
		&& map_n[x - 2] == 'e' && map_n[x - 1] == 'r')
		return (1);
	else
		(ft_printf("your map shoud contain .ber in the end\n"), exit(1));
}
