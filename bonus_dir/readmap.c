/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readmap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 02:59:28 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/02/21 13:27:11 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

char	*readmap(char *map_n)
{
	int		fd;
	char	*lines;
	char	*map;

	ber_check(map_n);
	fd = open(map_n, O_RDONLY);
	if (fd < 0)
		(ft_printf("map doesn't open"), exit(1));
	lines = get_next_line(fd);
	if (!lines)
		(printf("somting wrong whit the map\n"), exit(1));
	map = get_next_line(fd);
	while (map)
	{
		if (map)
			lines = ft_strjoin(lines, map);
			map = get_next_line(fd);
	}
	fd = ft_strlen(lines);
	if (lines[0] == '\n' || ft_strnstr(lines, "\n\n", ft_strlen(lines))
		|| lines[ft_strlen(lines) - 1] == '\n')
		(ft_printf("invalid map\n"), exit (1));
	len_check(lines);
	find_p(lines);
	return (lines);
}
