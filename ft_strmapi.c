/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <samusanc@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:54:40 by samusanc          #+#    #+#             */
/*   Updated: 2023/02/06 14:54:43 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

/*A cada carácter de la string ’s’, aplica la
función ’f’ dando como parámetros el índice de cada
carácter dentro de ’s’ y el propio carácter. Genera
una nueva string con el resultado del uso sucesivo
de ’f’*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char	*str;

	i = 0;
	if (!s)
		return (0);
	str = (malloc(ft_strlen((char *)s) * sizeof(char)));
	if (!str)
		return (0);
	while (s[i] != '\0')
	{
		str[i] = f(i, ((char *)s)[i]);
		++i;
	}
	str[i] = '\0';
	return (str);
}
