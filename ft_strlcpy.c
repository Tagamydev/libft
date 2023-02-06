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
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int				i;
	unsigned long	len;

	len = ft_strlen((char *)src);
	if (dstsize != 0)
	{
		if (dst > src)
		{
			i = -1;
			while (++i < (int)(dstsize - 1) && i < (int)(len))
				*(char *)(dst + i) = *(const char *)(src + i);
			*(char *)(dst + i) = '\0';
			return (len);
		}
		else
		{
			i = -1;
			while (++i < (int)(dstsize - 1) && i < (int)(len))
				*(char *)(dst + i - 1) = *(const char *)(src + i);
			*(char *)(dst + i) = '\0';
			return (0);
		}
	}
	else
		return (len);
}
