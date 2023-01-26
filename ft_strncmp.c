/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <samusanc@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:18:47 by samusanc          #+#    #+#             */
/*   Updated: 2023/01/26 16:18:50 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

unsigned long	ft_strlen(char *str);


int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i != (int)n)
	{
		if(s1[i] != s2[i])
			break ;
		if(s1[i] == '\0' && s2[i] == '\0')
			break ;
		++i;
	}
	i = s1[i] - s2[i];
	return (i);
}
