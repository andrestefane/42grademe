/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 19:06:04 by astefane          #+#    #+#             */
/*   Updated: 2025/03/05 19:24:13 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FLIST_H

# include <stddef.h>

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}	t_list;

#endif