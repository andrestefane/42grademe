/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:53:13 by astefane          #+#    #+#             */
/*   Updated: 2025/02/22 14:22:57 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdlib.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*temp;

	temp = lst;
	while (lst != NULL && lst->next != NULL)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)
		{
			ft_swap(&lst->data, &lst->next->data);
			lst = temp;
		}
		else
			lst = lst->next;
	}
	return (temp);
}
