/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <samusanc@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:17:17 by samusanc          #+#    #+#             */
/*   Updated: 2023/01/25 16:17:20 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	*ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	str = (void *)malloc(count * size);
	if (!str)
		return (0);
	ft_bzero(str, count * size);
	return (str);
}
