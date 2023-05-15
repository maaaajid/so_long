/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 23:16:53 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/04/10 03:37:24 by aelbouaa         ###   ########.fr       */
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
# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"

typedef struct s_long
{
	void	*p;
	void	*new_window;
	void	*ima_wall;
	void	*floor;
	void	*coin1;
	void	*coin2;
	void	*coin3;
	void	*coin4;
	void	*coin5;
	void	*coin6;
	void	*door;
	void	*player1;
	void	*player2;
	void	*player3;
	void	*player4;
	void	*player5;
	void	*rplayer1;
	void	*rplayer2;
	void	*rplayer3;
	void	*rplayer4;
	void	*rplayer5;
	void	*bomb1;
	void	*bomb2;
	void	*bomb3;
	void	*bomb4;
	void	*bomb5;
	void	*bomb6;
	void	*bomb7;
	void	*bomb8;
	void	*bomb9;
	void	*bomb10;
	void	*prize;
	int		a;
	int		b;
	char	*line;
	char	**lines;
	int		lnum;
	int		num;
	char	move;
	int		y;
	int		x;
	int		m;
	int		f;
	int		t;
	int		r;
	int		i;
	int		j;
	int		po;
}	t_long;

size_t	get_strlen(const char *str);
char	*getdup(char *s1);
char	*get_next_line(int fd);
int		get_strchr(const char *s, int c);
char	*get_strjoin(char *s1, char *s2);
char	*get_strdup(char *s1);
int		ber_check(char *map_n);
char	*readmap(char *map_n);
void	len_check(char *line);
void	wall_check(char **lines);
int		count_lines(char **lines);
int		move(int x, t_long *s);
void	zeronull(t_long *s);
int		ft_close(t_long *s);
void	movement(t_long *s);
void	coinmove(t_long *s);
int		mtoinn(t_long *s);
void	moving(t_long *s);
int		find_c(t_long *s);
void	openbox(t_long *s);
void	mxfti(t_long *s);
void	mxfti2(t_long *s);
void	flo_pla(t_long *s);
void	flo_rpla(t_long *s);
void	flo_door(t_long *s);
void	flo_coin(t_long *s);
void	f_while(t_long *s);
void	find_p(char *line);
void	checker2(char **map);
void	whiler(char **l, int y, int x);
void	char_check(char *line);
void	char_num(char *line);
void	checker2(char **map);
void	find_zerox(char **l, int y, int x);
void	checker3(char **map, int y, int x);
void	find_e(char **map);
void	whiler(char **l, int y, int x);
void	zeronull(t_long *s);
void	findplayer(t_long *s);
void	ex(t_long *s);
void	bomb1(t_long *s);
void	bomb2(t_long *s);
void	bomb3(t_long *s);
void	bomb4(t_long *s);
void	bomb5(t_long *s);
void	bomb6(t_long *s);
void	bomb7(t_long *s);
void	bomb8(t_long *s);
void	bomb9(t_long *s);
void	bomb10(t_long *s);
void	flo_coin2(t_long *s);
void	flo_coin3(t_long *s);
void	flo_coin4(t_long *s);
void	flo_coin5(t_long *s);
void	flo_coin6(t_long *s);
void	flo_pla2(t_long *s);
void	flo_pla3(t_long *s);
void	flo_pla4(t_long *s);
void	flo_pla5(t_long *s);
void	flo_rpla2(t_long *s);
void	flo_rpla3(t_long *s);
void	flo_rpla4(t_long *s);
void	flo_rpla5(t_long *s);
void	ft_free(t_long *s);
void	string(t_long *s);

#	endif