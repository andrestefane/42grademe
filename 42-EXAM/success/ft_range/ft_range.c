/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:35:27 by astefane          #+#    #+#             */
/*   Updated: 2025/02/21 17:39:11 by astefane         ###   ########.fr       */
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
	int	*result;
	int	i;
	int	len;

	i = 0;
	len = ft_abs(end - start) + 1;
	result = (int *)malloc(sizeof(int) * len);
	if (!result)
		return (NULL);
	while (i < len)
	{
		if (start < end)
		{
			result[i] = start;
			start++;
			i++;
		}
		else
		{
			result[i] = start;
			start--;
			i++;
		}
	}
	return (result);
}
