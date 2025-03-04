/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 07:15:27 by astefane          #+#    #+#             */
/*   Updated: 2025/02/27 07:15:27 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strrev(char *str)
{
	int		i;
	int		j;
	char 	temp;

	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	while (str[i])
		i++;
	j = 0;
	while (j < i--)
	{
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
		j++;
	}
	return (str);
}
/* 
int main()
{
    char str[] = "Hola";  // Importante: no usar un string literal porque son inmutables
    printf("Original: %s\n", str);
    printf("Invertido: %s\n", ft_strrev(str));
    return 0;
} */