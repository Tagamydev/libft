/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_powten.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <samusanc@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:17:36 by samusanc          #+#    #+#             */
/*   Updated: 2023/02/04 13:17:38 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_powten(int n)
{
	int i;
	int	t;
	int	t2;


	i = 1;
	t = 10;
	t2 = 10;
	if (n <= 0)
		i = 1;
	while (i != n)
	{
		t = t2 * t;
		++i;
	}
	return (t);
}
