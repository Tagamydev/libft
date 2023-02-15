/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <samusanc@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 10:55:42 by samusanc          #+#    #+#             */
/*   Updated: 2023/02/15 16:25:18 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_tn(int n)
{
	static int	a = 0;

	if (n == -1)
		return (a);
	a = n;
	return (a);
}

void	ft_pstr(int l, int i, const char *s, char **group)
{
	char	*str;
	int		a;
	int		b;

	a = ft_tn(-1);
	b = 0;
	str = (malloc((l - 1) * sizeof(char)));
	str[i] = '\0';
	--i;
	while (l > 0)
	{
		str[l] = s[i];
		--i;
		--l;
	}
	group[a] = str;
}

int	ft_count(char const *str, char c, int v, char **group)
{
	int i;
	int	l;
	int a;
	
	i = 0;
	a = 0;
	while (str[i] != '\0')
	{
		l = 0;
		while (str[i] != '\0')
		{
			++l;
			++i;
			if (str[i] == c)
				break ;
		}
		if (l > 1)
		{
			++a;
			ft_tn(a);
			if (v == 1)
				ft_pstr(l, i, str, group);
		}
	}
	return (a);
}

char **ft_split(char const *s, char c)
{
	printf("%d", ft_count(s, c, 0, 0));
	return (0);
}
