#include "a.h"

t_list	*ft_newlist(void *content)
{
	t_list	*n_node;

	n_node = malloc(sizeof(t_list));
	n_node->content = content;
	n_node->next = 0;
	return (n_node);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = lst[0]->content;
}

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst->next)
	{
		lst = lst->next;
		++i;
	}
	return (i);
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*n_node;

	n_node = malloc(sizeof(t_list));
	while (lst->next)
		lst = lst->next;
	lst->next = n_node->content;
	n_node->next = 0;
	return (n_node);
}

int	main(void)
{
	t_list	*list;
	t_list	*list2;
	t_list	**g_lists;

	list = ft_newlist("hola");
	list2 = ft_newlist("adeu");
	g_lists[0] = list;
	g_lists[1] = list2;
	printf("%s", (char *)list->content);
	ft_lstadd_front(g_lists, list2);
	printf("%d", ft_lstsize(list2));
}
