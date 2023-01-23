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
#include<stdio.h>
#include<unistd.h>

unsigned long	ft_strlen(char *str);

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	i;
	char	*str1c;
	char	*str2c;

	i = n;
	str1c = (char*)str1;
	str2c = (char*)str2;
	while ((int)(--i) >= 0)
	{
		str1c[i] = str2c[i];
	}
	if(n > ft_strlen(str1c))
		str1c[n] = 0;		
	return (str1);
}

// void	*ft_memmove(void *str1, const void *str2, size_t n)
// {
// 	size_t	i;
// 	char	*str1c;
// 	char	*str2c;

// 	i = 0;
// 	str1c = (char*)str1;
// 	str2c = (char*)str2;
// 	if (n <= 0)
// 		return (str1);
// 	n = n -1;
// //en vez de hacer de 0 a lo que sea haz de lo que sea a cero restando
// 	while (i <= n)
// 	{
// 		(str1c[i] = str2c[i]);
// 		++i;
// 	}
// 	if (str1c[i] == '\0')
// 		str1c[i] = '\0';
// 	return (str1);
// }
