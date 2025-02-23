/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:17:10 by astefane          #+#    #+#             */
/*   Updated: 2025/02/11 16:33:04 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_union(char *s1, char *s2)
{
	int		i;
	char	result[256] = {0};

	i = 0;
	while (s1[i])
	{
		if (!result[(unsigned char)s1[i]])
		{
			write(1, &s1[i], 1);
			result[(unsigned char)s1[i]] = 1;
		}
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (!result[(unsigned char)s2[i]])
		{
			write(1, &s2[i], 1);
			result[(unsigned char)s2[i]] = 1;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	else
	{
		write(1, "\n", 1);
		return (0);
	}
	write(1, "\n", 1);
	return (0);
}
