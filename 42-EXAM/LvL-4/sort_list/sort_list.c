/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 20:10:30 by astefane          #+#    #+#             */
/*   Updated: 2025/03/15 20:23:53 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>


typedef struct s_list
{
	int				data;
	struct s_list	*next;
}	t_list;

void	swap_data(t_list *a, t_list *b)
{
	int	temp;

	temp = a->data;
	a->data = b->data;
	b->next = temp;
}

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*current;
	t_list	*index;

	current = lst;
	index = NULL;
	if (lst == NULL || lst == NULL)
		return (lst);
	while (current != NULL)
	{
		index = current->next;
		while (index != NULL)
		{
			if (cmp(current->data, index->data) > 0)
				swap_data(current, index);
			index = index->next;
		}
		current = current->next;
	}
	return (lst);
}
