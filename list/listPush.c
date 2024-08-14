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


void	listPushF(t_list *list, t_node *node)
{
	t_node	*tmp;

	tmp = list->head;
	tmp->back = node;
	node->next = tmp;
	list->head = node;
	list->size++;
}

void	listPushB(t_list *list, t_node *node)
{
	t_node	*tmp;

	tmp = list->tail;
	tmp->next = node;
	node->back = tmp;
	list->tail = node;
	list->size++;
}