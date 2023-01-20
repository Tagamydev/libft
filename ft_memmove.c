/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <samusanc@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:19:24 by samusanc          #+#    #+#             */
/*   Updated: 2023/01/17 13:19:25 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	n = n -1;
	while (i <= n)
	{
		((unsigned char *)str1)[i] = ((unsigned const char *)str2)[i];
		++i;
	}
	if (((unsigned char *)str1)[i] == '\0')
		((unsigned char *)str1)[i] = '\0';
	return (str1);
}
