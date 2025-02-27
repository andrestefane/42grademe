/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 00:54:12 by astefane          #+#    #+#             */
/*   Updated: 2025/02/27 00:54:12 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[i])
		{
			if (s1[i] == s2[j])
				return ((char *)&s1[i]);
				j++;
		}
		i++;
	}
	return (NULL);
}
/* 
int main()
{
    char str[] = "Hola, mundo!";
    char accept[] = "aeiou";
    
    char *result = ft_strpbrk(str, accept);

    if (result)
        printf("Primera coincidencia: %c\n", *result);
    else
        printf("No se encontró ninguna coincidencia.\n");

    return 0;
} */
