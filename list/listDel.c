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
#include "libft.h"

static t_node	*oneExist(t_node *a, t_node *b)
{
	if (a)
		return (a);
	return (b);
}

static void	listDeldisconnect(t_list *list, t_node *node)
{
	t_node	*tmp_b;
	t_node	*tmp_n;
	t_node	*tmp;

	tmp_b = node->back;
	tmp_n = node->next;
	node->back = NULL;
	node->next = NULL;
	list->size--;
	if (tmp_b)
		tmp_b->next = tmp_n;
	if (tmp_n)
		tmp_n->back = tmp_b;
	if (!tmp_b && !tmp_n)
		ft_bezero(list, sizeof(t_list));
	else
	{
		list->head = searchHead(oneExist(tmp_b, tmp_n));
		list->tail = searchTail(oneExist(tmp_b, tmp_n));
	}
}

void	listDel(t_list *list, t_node *node)
{
	t_node	*tmp;

	tmp = list->head;
	while (tmp != node && tmp)
		tmp = tmp->next;
	if (!tmp)
		return ;
	listDeldisconnect(list, tmp);
	tmp->del(tmp->content);
	ft_bzero(tmp, sizeof(t_node));
	free(tmp);
}