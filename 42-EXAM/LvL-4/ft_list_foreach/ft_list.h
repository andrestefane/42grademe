/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 16:07:25 by astefane          #+#    #+#             */
/*   Updated: 2025/03/15 16:13:03 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST.H
#define	FT_LIST.H

# include <stddef.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

#endif