/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <samusanc@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:46:28 by samusanc          #+#    #+#             */
/*   Updated: 2023/01/17 14:46:31 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

size_t	ft_count(const char *restrict str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_count(src));
	else
	{	
		dstsize = dstsize - 1;
		while (i < dstsize)
		{
			dst[i] = src[i];
			++i;
		}
		dst[i] = '\0';
	}
	return (ft_count(src));
}
