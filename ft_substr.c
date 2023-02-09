/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <samusanc@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:31:50 by samusanc          #+#    #+#             */
/*   Updated: 2023/02/09 15:38:44 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

static char	*ft_ssfull(size_t len, char *sc, int i, char *str)
{
	if (len > ft_strlen(sc))
	{
		while (sc[i] != '\0')
		{
			str[i] = sc[i];
			++i;
		}
		str[i] = '\0';
	}
	else
	{
		while (i != (int)len)
		{
			str[i] = sc[i];
			++i;
		}
	}
	str[i] = '\0';
	return (str);
}

/*Reserva (con malloc(3)) y devuelve una substring de
la string ’s’.
La substring empieza desde el índice ’start’ y
tiene una longitud máxima ’len’.*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*sc;
	size_t	i;

	i = 0;
	str = (malloc(len * sizeof(char)));
	if (len == 0)
		return (str);
	if (!str || !s)
		return (0);
	sc = (char *)s;
	while (s[i] != s[start] && i != ft_strlen((char *)s))
	{
		++sc;
		++i;
	}
	i = 0;
	str = ft_ssfull(len, sc, i, str);
	return (str);
}
