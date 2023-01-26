/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <samusanc@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:50:44 by samusanc          #+#    #+#             */
/*   Updated: 2023/01/26 15:50:46 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	v;

	i = 0;
	v = 0;
	if (c == '\0')
	{
		while (*(const char *)(s + v) != '\0')
			++v;
		return ((char *)s + v);
	}
	while (*(const char *)(s + i) != '\0')
	{
		if (*(const char *)(s + i) == c)
		{
			v = 1;
			break ;
		}
		++i;
	}
	if (v == 0)
		return (0);
	return ((char *)s + i);
}
