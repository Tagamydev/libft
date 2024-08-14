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

void	list_push_f(t_list *list, t_node *node)
{
	t_node	*tmp;

	tmp = list->head;
	if (tmp)
		tmp->back = node;
	node->next = tmp;
	list->head = node;
	list->size++;
}

void	list_push_b(t_list *list, t_node *node)
{
	t_node	*tmp;

	tmp = list->tail;
	if (tmp)
		tmp->next = node;
	node->back = tmp;
	list->tail = node;
	list->size++;
}
