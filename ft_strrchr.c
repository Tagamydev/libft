/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <samusanc@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:05:05 by samusanc          #+#    #+#             */
/*   Updated: 2023/01/26 16:05:07 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		v;

	i = 0;
	while (*(const char *)(s + i) != '\0')
		++i;
	v = 0;
	if (c == '\0')
	{
		while (*(const char *)(s + v) != '\0')
			++v;
		return ((char *)s + v);
	}
	while ((s + i) >= (s + 0))
	{
		if (*(const char *)(s + i) == c)
		{
			v = 1;
			break ;
		}
		--i;
	}
	if (v == 0)
		return (0);
	return ((char *)s + i);
}
