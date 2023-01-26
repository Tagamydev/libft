/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <samusanc@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:25:43 by samusanc          #+#    #+#             */
/*   Updated: 2023/01/17 16:25:44 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

unsigned long	ft_strlen(char *str);

size_t	ft_strlcat(char *d, const char* src, size_t i)
{
	char	*s;
	int		i2;
	int		i3;
	int		i4;

	s = (char *)src;
	if (!i)
		return (ft_strlen(s));
	i2 = (int)(ft_strlen(d) + ft_strlen(s));
	i3 = 0;
	if (i > ft_strlen(d))
	{
		i4 = i2 - (int)ft_strlen(s);
		while (i4 < (int)i - 1 && i3 < (int)(ft_strlen(s)))
		{
			d[i4] = s[i3];
			++i4;
			++i3;
		}
		d[i4] = '\0';
		return (i2);
	}
	else if (i == 0)
	{
		return (ft_strlen(s));
	}
	return (ft_strlen(s) + i);
}
