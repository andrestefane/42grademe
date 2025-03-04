/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 02:47:09 by astefane          #+#    #+#             */
/*   Updated: 2025/03/04 02:47:09 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int* tab, unsigned int len)
{
	int	max;
	int	i;

	max = tab[0];
	i = 0;
	while (i <= len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
