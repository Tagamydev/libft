/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <samusanc@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 12:31:33 by samusanc          #+#    #+#             */
/*   Updated: 2023/10/19 10:27:02 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <unistd.h>
# include <stdlib.h>

typedef struct s_node
{
	void			*content;
	struct s_list	*next;
	struct s_list	*back;
	void			*(*del)(void *);
}				t_node;

typedef struct s_list
{
	unsigned int			size;
	t_node					*head;
	t_node					*tail;
}				t_list;

// node funtions
t_node			*node(void *content, void *(*del)(void *));
void			nodeClear(t_node *node);

// list funtions

t_node			*searchHead(t_node *node);
t_node			*searchTail(t_node *node);
unsigned int	lstSize(t_node *node);

t_list			list(t_node *node);
void			listPushF(t_list *list, t_node *node);
void			listPushB(t_list *list, t_node *node);
void			listClear(t_list *list);
void			listDel(t_list *list, t_node *node);
void			listSwap(t_node *node_a, t_node *node_b);
t_node			*listPop(t_list *list, t_node *node);
t_node			*listI(t_list *list, unsigned int index);
t_node			*listFind(t_list *list, int *(*f)(void *));


#endif
