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

size_t	ft_long(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

size_t	ft_long2(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

size_t	ft_zero(size_t *t2, size_t dstsize)
{
	if (dstsize != 0)
	{
		if (*t2 > dstsize)
		{
			*t2 = dstsize;
		}
		dstsize = dstsize - 1;
	}
	else
		*t2 = dstsize;
	return (dstsize);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	i2;
	size_t	t;
	size_t	t2;
	size_t	*tt2;

	i = 0;
	i2 = 0;
	t = ft_long(dst);
	t2 = ft_long2(src);
	tt2 = &t2;
	dstsize = ft_zero(tt2, dstsize);
	if (dstsize > t)
	{
		while (dst[i] != '\0')
			++i;
		while (i2 <= dstsize)
		{
			dst[i] = src[i2];
			++i;
			++i2;
		}
		dst[i] = '\0';
	}
	return (t + t2);
}
