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

// size_t	strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	int	dstl;
	
// 	if (dstsize <= dstl)
// 		return (dstl + src);
// 	dstl = (int)(ft_strlen((char *)(dst)));
// 	return (dstl + src);
// }