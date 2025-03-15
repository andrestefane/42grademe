/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:05:30 by astefane          #+#    #+#             */
/*   Updated: 2025/03/06 15:25:19 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	*ft_range(int start, int end)
{
	int	len;
	int	i;
	int	*result;

	len = ft_abs(start - end) + 1;
	i = 0;
	result = (int *)malloc(sizeof(int) * len);
	if (!result)
		return (NULL);
	while (i < len)
	{
		result[i] = start;
		if (start < end)
			start++;
		else
			start--;
		i++;
	}
	return (result);
}
