/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:28:45 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/02/21 11:07:55 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	char	*ss;
	char	*m;
	size_t	x;
	size_t	z;

	if (!s1 || !s2)
		return (0);
	x = ft_strlen(s1) + ft_strlen(s2) +1;
	z = 0;
	s = (char *)s1;
	ss = (char *)s2;
	m = (char *)malloc(x * sizeof(char));
	if (!m)
		return (NULL);
	x = 0;
	while (s[x] != '\0')
	{
		m[x] = s[x];
		x++;
	}
	while (ss[z] != '\0')
		m[x++] = ss[z++];
		m[x] = '\0';
	return (free(s), free(ss), m);
}
