/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 19:19:36 by astefane          #+#    #+#             */
/*   Updated: 2025/02/26 19:19:36 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rot_13(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] >= 'a' && str[i] <= 'm')
				c = str[i] + 13;
			if (str[i] >= 'n' && str[i] <= 'z')
				c = str[i] - 13;
			write(1, &c, 1);
			i++;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] >= 'A' && str[i] <= 'M')
				c = str[i] + 13;
			if (str[i] >= 'N' && str[i] <= 'Z')
				c = str[i] - 13;
			write(1, &c, 1);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		rot_13(argv[1]);
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
		return (0);
	}
}
