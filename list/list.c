/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <samusanc@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:24:18 by samusanc          #+#    #+#             */
/*   Updated: 2024/08/14 11:24:27 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_node	*searchHead(t_node *node)
{
	t_node			*tmp;

	if (!tmp)
		return (NULL);
	tmp = node;
	while (tmp->next)
		tmp = tmp->back;
	return (tmp);
}

t_node	*searchTail(t_node *node)
{
	t_node			*tmp;

	if (!tmp)
		return (NULL);
	tmp = node;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

unsigned int	lstSize(t_node *node)
{
	t_node			*tmp;
	unsigned int	i;

	tmp = node;
	i = 0;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

/*
	t_list	list(t_node *node, void *(*del)(void *));
	creates a list from a given node 
	and automatically assigns every parameter to the struct;
	you only need the function to clear all the node content.
*/
t_list	list(t_node *node)
{
	t_list	result;

	result.head = searchHead(node);
	result.tail = searchTail(node);
	result.size = lstSize(result.head);
	return (result);
}