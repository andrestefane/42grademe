/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 18:29:13 by astefane          #+#    #+#             */
/*   Updated: 2025/02/22 18:36:15 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int		len;
	int		n;
	char	*result;

	n = nbr;
	len = ft_numlen(nbr);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}
	if (n == 0)
		result[0] = '0';
	while (n > 0)
	{
		result[len - 1] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	return (result);
}

/* 
int main(void)
{
	int n = -124;
	char *str;
	str = ft_itoa(n);
	printf("%s\n", str);
	free(str);
} */