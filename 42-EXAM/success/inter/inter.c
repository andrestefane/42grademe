/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 16:11:34 by astefane          #+#    #+#             */
/*   Updated: 2025/02/22 16:21:28 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_equal(char *s1, int n, char c)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	inter(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (!(ft_equal(s1, i, s1[i])) && s1[i] == s2[j])
			{
				write(1, &s1[i], 1);
				break ;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		inter(argv[1], argv[2]);
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
		return (0);
	}
	return (0);
}