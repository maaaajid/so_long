/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readmap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 02:59:28 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/04/08 07:32:50 by aelbouaa         ###   ########.fr       */
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
			(ft_putstr_fd("invalid map\n", 2), exit (1));
	while (lines[t])
	{
		if (lines[t][0] != '1' || lines[t][len - 1] != '1')
			(ft_putstr_fd("invalid map\n", 2), exit (1));
		t++;
	}
	x = 0;
	while (lines[t - 1][x])
		if (lines[t - 1][x++] != '1')
			(ft_putstr_fd("invalid map\n", 2), exit (1));
	x = 0;
	while (lines[x])
		free(lines[x++]);
	free(lines);
}

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
		(ft_putstr_fd("invalid map\n", 2), exit (1));
}

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
			(ft_putstr_fd("invalid map\n", 2), exit (1));
	}
	char_num(line);
}

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
			(ft_putstr_fd("invalid map\n", 2), exit (1));
		x++;
	}
	char_check(line);
	wall_check(lines);
}

char	*readmap(char *map_n)
{
	int		fd;
	char	*lines;
	char	*map;

	ber_check(map_n);
	fd = open(map_n, O_RDONLY);
	if (fd < 0)
		(ft_putstr_fd("map doesn't open", 2), exit(1));
	lines = get_next_line(fd);
	if (!lines)
		(ft_putstr_fd("somting wrong whit the map\n", 2), exit(1));
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
		(ft_putstr_fd("invalid map\n", 2), exit (1));
	len_check(lines);
	find_p(lines);
	return (lines);
}
