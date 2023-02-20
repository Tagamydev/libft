/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <samusanc@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 10:55:42 by samusanc          #+#    #+#             */
/*   Updated: 2023/02/20 15:25:43 by samusanc         ###   ########.fr       */
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
	--l;
	--l;
	while (l >= 0)
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
			ft_tn(a);
			++a;
			if (v == 1)
			{
				if (a == 1)
					ft_pstr(l + 1, i, str, group);
				else
					ft_pstr(l, i, str, group);
			}
		}
	}
	return (a);
}

char	**ft_freewilly(char **s)
{
	int	i;

	i = 0;
	while (s)
	{
		free(s[i]);
		s[i] = NULL;
		++i;
	}
	free(s);
	return (NULL);
}

char **ft_split(char const *s, char c)
{
   	char	**group;
	int		a;

	if	(!s)
	{
		group = malloc(1 * sizeof(char **));
		if (!group)
			return (NULL);
		*group = NULL;
		return (NULL);
	}
	group = (malloc(ft_count(s, c, 0, 0) * sizeof(char *)));
	if (!group)
		return (0);
	c = ft_count(s, c, 1, group);
	a = ft_tn(-1);
	++a;
	group[a] = 0;
	if (!group)
	{
		group = ft_freewilly(group);
	}
	return (group);

}
