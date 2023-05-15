/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   openbox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 01:59:10 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/02/21 04:55:37 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	openbox(t_long *s)
{
	s->m++;
	if (s->m == 30)
		bomb1(s);
	if (s->m == 60)
		bomb2(s);
	if (s->m == 90)
		bomb3(s);
	if (s->m == 120)
		bomb4(s);
	if (s->m == 150)
		bomb5(s);
	if (s->m == 180)
		bomb6(s);
	if (s->m == 210)
		bomb7(s);
	if (s->m == 240)
		bomb8(s);
	if (s->m == 270)
		bomb9(s);
	if (s->m == 300)
		bomb10(s);
	if (s->m == 300)
		s->lines[s->y][s->x] = 'e';
}
