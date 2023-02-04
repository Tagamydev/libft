/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getndigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <samusanc@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:17:17 by samusanc          #+#    #+#             */
/*   Updated: 2023/02/04 13:17:20 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_getndigit(int n, int i)
{
	int		a;
	double	d;

	a = 0;
	if (n < 0)
		n = n * -1;
	if (i > ft_intlen(n))
		return (0);
	a = ft_powten(ft_intlen(n)) / ft_powten(i);
	n = n / a;
	d = n;
	n = n / 10;
	d = d / 10;
	d = d - n;
	d = d * 10;
	n = d + 0.5;
	return (n);
}
