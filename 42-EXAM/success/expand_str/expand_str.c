/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 16:22:23 by astefane          #+#    #+#             */
/*   Updated: 2025/02/22 16:44:24 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	expand_str(char *str)
{
	int	i;
	int	space;

	i = 0;
	space = 0;
	while (*str == ' ' || *str == '\t' && *str)
		str++;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			space = 3;
		else
		{
			while (space)
			{
				write(1, " ", 1);
				space--;
			}
			write(1, &str[i], 1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		expand_str(argv[1]);
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
		return (0);
	}
}
