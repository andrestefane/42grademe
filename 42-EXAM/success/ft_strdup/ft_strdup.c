/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:18:34 by astefane          #+#    #+#             */
/*   Updated: 2025/02/03 16:24:33 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i  = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char	*src)
{
	int		len;
	int		i;
	char	*result;

	len = ft_strlen(src);
	i = 0;
	result = (char *)malloc(len + 1);
	if (!result)
		return (0);
	while (src[i])
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
