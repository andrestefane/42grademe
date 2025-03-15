/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 16:19:17 by astefane          #+#    #+#             */
/*   Updated: 2025/03/15 16:29:26 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}	t_list;

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*temp;

	if (cmp((*begin_list)->data, data_ref) == 0)
		return ;
	if (cmp((*begin_list)->data, data_ref) == 0)
	{
		temp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(temp);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	else
		ft_list_remove_if(&((*begin_list)->next), data_ref, cmp);
}
