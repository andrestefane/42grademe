/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 14:26:22 by astefane          #+#    #+#             */
/*   Updated: 2025/02/22 14:33:53 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	search_and_replace(char *str, char *oldest, char newone)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == *oldest)
			write(1, &newone, 1);
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[2][i])
	{
		if (i >= 1)
		{
			write(1, "\n", 1);
			return (0);
		}
		i++;
	}
	if (argc == 4)
	{
		search_and_replace(argv[1], argv[2], argv[3][0]);
		write(1, "\n", 1);
	}
	return (0);
}
