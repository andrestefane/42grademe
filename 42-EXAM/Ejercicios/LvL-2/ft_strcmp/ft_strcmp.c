/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 20:53:12 by astefane          #+#    #+#             */
/*   Updated: 2025/02/26 20:53:12 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i]- s2[i]);
}
int main() {
    printf("%d\n", ft_strcmp("Hola", "Hola"));   // 0
    printf("%d\n", ft_strcmp("Hola", "Holb"));   // negativo
    printf("%d\n", ft_strcmp("Holb", "Hola"));   // positivo
    printf("%d\n", ft_strcmp("Hola", "Holanda"));// negativo
    printf("%d\n", ft_strcmp("Holanda", "Hola"));// positivo
    return 0;
}
