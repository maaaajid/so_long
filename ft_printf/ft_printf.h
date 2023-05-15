/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:43:52 by aelbouaa          #+#    #+#             */
/*   Updated: 2022/11/13 18:11:41 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include<stdio.h>
# include<unistd.h>
# include<stdarg.h>

int	ft_putchar(int c);
int	puthex(unsigned int num, char c);
int	putnbr(long int num);
int	putptr(unsigned long long num);
int	putstr(char *str);
int	putunsin(unsigned int num);
int	ft_printf(const char *str, ...);

#endif
