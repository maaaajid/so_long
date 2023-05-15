/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 01:23:58 by aelbouaa          #+#    #+#             */
/*   Updated: 2022/11/13 23:45:23 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	nextchar(char c, va_list ptr)
{
	int	x;

	x = 0;
	if (c == 'c')
		x = x + ft_putchar(va_arg(ptr, int));
	else if (c == 's')
		x = x + putstr(va_arg(ptr, char *));
	else if (c == 'p')
	{
		x = x + putstr("0x");
		x = x + putptr(va_arg(ptr, unsigned long long));
	}
	else if (c == 'd' || c == 'i')
		x = x + putnbr(va_arg(ptr, int));
	else if (c == 'u')
		x = x + putunsin(va_arg(ptr, unsigned int));
	else if (c == 'x' || c == 'X')
		x = x + puthex(va_arg(ptr, int), c);
	else if (c == '%')
		x = x + ft_putchar('%');
	return (x);
}

int	ft_printf(const char *str, ...)
{
	va_list	ptr;
	int		x;
	int		cont;

	x = 0;
	cont = 0;
	va_start(ptr, str);
	while (str[x])
	{
		if (str[x] == '%')
		{
			if (str[x + 1] == '\0')
				return ((ft_putchar('\0')) - 1);
			cont = cont + nextchar(str[x + 1], ptr);
			x = x + 2;
		}
		else
		{
			write (1, &str[x], 1);
			x++;
			cont++;
		}
	}
	va_end (ptr);
	return (cont);
}
