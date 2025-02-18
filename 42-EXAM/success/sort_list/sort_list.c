#include "list.h"
#include <stdlib.h>
#include <stddef.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *temp;
	
	temp = lst;
	while(lst->next != NULL)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			ft_swap(&lst->data, &lst->next->data);
			lst = temp;
		}
		else
			lst = lst->next;
	}
	lst = temp;
	return (lst);
}