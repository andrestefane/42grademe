/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 19:39:37 by astefane          #+#    #+#             */
/*   Updated: 2025/02/22 19:47:58 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rotone(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] == 'Z')
				write(1, "A", 1);
			else
			{
				str[i] = str[i] + 1;
				write(1, &str[i], 1);
			}
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] == 'z')
				write(1, "a", 1);
			else
			{
				str[i] = str[i] + 1;
				write(1, &str[i], 1);
			}
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		rotone(argv[1]);
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
		return (0);
	}
	return (0);
}
