/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:11:58 by astefane          #+#    #+#             */
/*   Updated: 2025/01/29 17:21:14 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	rotate(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			if (str[i] >= 'a' && str[i] <= 'm')
				ft_putchar(str[i] + 13);
			else if (str[i] >= 'm' && str[i] <= 'z')
				ft_putchar(str[i] - 13);
			else if (str[i] >= 'A' && str[i] <= 'M')
				ft_putchar(str[i] + 13);
			else if (str[i] >= 'M' && str[i] <= 'Z')
				ft_putchar(str[i] - 13);
			else
				ft_putchar(str[i]);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		rotate(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
