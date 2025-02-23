/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 20:02:17 by astefane          #+#    #+#             */
/*   Updated: 2025/02/12 20:15:05 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct  s_point
{
    int           x;
    int           y;
}               t_point;

void	fill(char **tab, t_point size, t_point current_pos, char to_fill)
{
	if (current_pos.y < 0 || current_pos.y >= size.y || current_pos.x < 0 || current_pos.x >= size.x
		|| tab[current_pos.y][current_pos.x] != to_fill)
		return ;
	tab[current_pos.y][current_pos.x] = 'F';
	fill(tab, size, (t_point){current_pos.x - 1, current_pos.y}, to_fill);
	fill(tab, size, (t_point){current_pos.x + 1, current_pos.y}, to_fill);
	fill(tab, size, (t_point){current_pos.x, current_pos.y - 1}, to_fill);
	fill(tab, size, (t_point){current_pos.x, current_pos.y + 1}, to_fill);
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}