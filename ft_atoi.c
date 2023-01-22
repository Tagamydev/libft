/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <samusanc@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:46:13 by samusanc          #+#    #+#             */
/*   Updated: 2023/01/11 13:46:15 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_naruto2(char *str, int i, int r)
{
	while ((str[i] >= 48 && str[i] <= 57) && str[i] != '\e')
	{
		r = (r * 10) + (str[i] - '0');
		++i;
	}
	return (r);
}

int	ft_naruto(char *str, int i, int signo, int r)
{
	while (str[i] <= 32)
	{
		if (str[i] == '\e')
			return (0);
		++i;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			signo = signo * -1;
			++i;
			break ;
		}
		else
		{
			++i;
			break ;
		}
	}
	r = ft_naruto2(str, i, r);
	return (r * signo);
}

int	ft_atoi(char *str)
{
	int	r;
	int	i;
	int	signo;

	i = 0;
	signo = 1;
	r = 0;
	while (str[i] != '\0')
	{
		r = ft_naruto(str, i, signo, r);
		return (r);
		++i;
	}
	return (r);
}
