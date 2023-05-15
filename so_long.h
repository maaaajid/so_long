/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 23:16:53 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/04/08 07:38:30 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdio.h>
# include <mlx.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <limits.h>
# include "./libft/libft.h"
# include "./ft_printf/ft_printf.h"

typedef struct s_long
{
	void	*p;
	void	*new_window;
	void	*ima_wall;
	void	*floor;
	void	*coin1;
	void	*door;
	void	*player1;
	int		a;
	int		b;
	char	*line;
	char	**lines;
	int		lnum;
	int		num;
	char	move;
	int		y;
	int		x;
	int		j;
}	t_long;

size_t	get_strlen(const char *str);
char	*getdup(char *s1);
char	*get_next_line(int fd);
int		get_strchr(const char *s, int c);
char	*get_strjoin(char *s1, char *s2);
char	*get_strdup(char *s1);
int		ber_check(char *map_n);
char	*readmap(char *map_n);
int		move(int x, t_long *s);
void	zeronull(t_long *s);
int		ft_close(t_long *s);
int		find_c(t_long *s);
void	mxfti(t_long *s);
void	f_while(t_long *s);
void	find_p(char *line);
void	checker2(char **map);
void	findplayer(t_long *s, char c);
void	ex(t_long *s);
void	ft_free(t_long *s);
void	string(t_long *s);
void	door(t_long *s);

#	endif