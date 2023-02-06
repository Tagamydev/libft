/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <samusanc@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:53:41 by samusanc          #+#    #+#             */
/*   Updated: 2023/02/06 14:53:44 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*Envía el número ’n’ al file descriptor dado.*/
void	ft_putnbr_fd(int n, int fd)
{
	long	nd;

	nd = n;
	if (n < 0)
	{
		nd = nd * -1;
		write(fd, "-", 1);
	}
	if (n > 9)
		ft_putnbr_fd((int)(nd / 10), fd);
	ft_putchar_fd(nd % 10 + '0', fd);
}
