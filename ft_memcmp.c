/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <samusanc@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:22:11 by samusanc          #+#    #+#             */
/*   Updated: 2023/01/30 14:22:18 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;
	char	*c;
	char	*b;

	i = 0;
	c = (char *)s1;
	b = (char *)s2;
	while (i < (int)n)
	{
		if (c[i] != b[i])
			return (c[i] - b[i]);
		i++;
	}
	return (0);
}
