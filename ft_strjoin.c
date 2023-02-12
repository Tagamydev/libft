/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <samusanc@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:55:06 by samusanc          #+#    #+#             */
/*   Updated: 2023/02/12 12:09:18 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static char	*ft_putins(char *s1c, char *str, int i, char *s2c)
{
	while (s1c[0] != '\0')
	{
		str[i] = s1c[0];
		++i;
		++s1c;
	}
	while (s2c[0] != '\0')
	{
		str[i] = s2c[0];
		++i;
		++s1c;
	}
	str[i] = '\0';
	return (str);
}

/*Reserva (con malloc(3)) y devuelve una nueva
string, formada por la concatenación de ’s1’ y
’s2’.*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*s1c;
	char	*s2c;
	int		i;

	s1c = (char *)s1;
	s2c = (char *)s2;
	if (!s1)
		return (0);
	str = malloc((ft_strlen(s2c) + ft_strlen(s1c)) * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	str = ft_putins(s1c, str, i, s2c);
	return (str);
}
