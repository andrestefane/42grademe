/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:13:59 by astefane          #+#    #+#             */
/*   Updated: 2025/03/06 15:24:50 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	*ft_rrange(int start, int end)
{
	int	len;
	int	i;
	int	*result;

	len = ft_abs(end - start) + 1;
	result = (int *)malloc(sizeof(int) * len);
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = end;
		if (end > start)
			end--;
		else
			end++;
		i++;
	}
	return (result);
}
