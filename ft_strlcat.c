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
#include<unistd.h>

unsigned long	ft_strlen(char *str);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	dstl;
	int	i;
	int	i2;

	dstl = (int)ft_strlen((char *)dst);
	if(dstsize == 0)
		return ((int)ft_strlen((char *)src));
	if ((int)dstsize <= dstl)
		return (dstl + (int)ft_strlen((char *)src));
	else
	{
		i = dstl;
		i2 = 0;
		while (i < (int)(dstsize - 1))
		{
			*(char *)(dst + i) = *(char *)(src + i2);
			++i2;
			++i;
		}
		*(char *)(dst + i) = '\0';
		return (dstl + (int)ft_strlen((char *)src));
	}
	return (dstl + (int)ft_strlen((char *)src));
}