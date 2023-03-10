/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <samusanc@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:53:23 by samusanc          #+#    #+#             */
/*   Updated: 2023/02/06 14:53:28 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*Envía el carácter ’c’ al file descriptor
especificado.*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
