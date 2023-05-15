/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coinmove.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 04:52:38 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/02/21 04:10:31 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	coinmove(t_long *s)
{
	s->f++;
	if (s->f == 10)
		flo_coin(s);
	if (s->f == 20)
		flo_coin2(s);
	if (s->f == 30)
		flo_coin3(s);
	if (s->f == 40)
		flo_coin4(s);
	if (s->f == 50)
		flo_coin5(s);
	if (s->f == 60)
		flo_coin6(s);
	if (s->f > 60)
		s->f = 0;
}
