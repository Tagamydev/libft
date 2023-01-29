/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <samusanc@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 14:23:09 by samusanc          #+#    #+#             */
/*   Updated: 2023/01/29 14:23:11 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char			*ft_strchr(const char *s, int c);

char			*ft_strnstr(const char	*a, const char *b, size_t len);

unsigned long	ft_strlen(char *str);

void	*ft_chrnull(void *sc, char c, int n)
{
	int		i2;
	char	*str;

	i2 = 0;
	str = (char *)sc;
	while (str[0] != c)
	{
		++str;
		++i2;
	}
	if (i2 + 1 > n)
		return (0);
	return (str);
}

void	*ft_memchr(const void *s, int c, size_t n)
{
	void	*sc;
	char	a[2];
	int		i;

	sc = (void *)s;
	i = n;
	a[0] = c;
	a[1] = '\0';
	if (c == '\0')
		return (ft_chrnull(sc, c, (int)n));
	sc = (void *)ft_strnstr(sc, a, n);
	return (sc);
}
