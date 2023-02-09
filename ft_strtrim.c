/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <samusanc@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:55:42 by samusanc          #+#    #+#             */
/*   Updated: 2023/02/09 16:44:44 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	ft_compare_char(char const c, char const *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (c == str[i])
			return (1);
		++i;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	
	int i;
	int	f;
	int	l;
	char *str;

	i = 0;
	l = 0;
	f = 0;
	if (!s1)
		return (ft_strdup(""));
	if (!set)
		return (ft_strdup((char *)s1));
	l = ft_strlen((char *)s1) - 1;
	if (ft_strncmp((char *)s1, (char *)set, ft_strlen((char *)s1)) == 0)
		return (ft_strdup(""));
	while (s1[i] != '\0')
	{
		if (ft_compare_char(s1[i], (char *)set) == 0)
			break ;
		++i;
	}
	while (l >= 0)
	{
		if (ft_compare_char(s1[l], (char *)set) == 0)
			break ;
		++f;
		--l;
	}
	l = ft_strlen((char *)s1);
	if (f > (l - 1) || i > (l - 1))
		return (ft_strdup(""));
	str = (malloc((l - (f + i)) - 1 * sizeof(char)));
	if (!str)
		return (0);
	f = l - f;
	l = 0;
	i = i + 1;
	while (i <= f)
	{
		str[l] = s1[(i - 1)];
		++l;
		++i;
	}
	str[i] = '\0';
	return (str);
}
