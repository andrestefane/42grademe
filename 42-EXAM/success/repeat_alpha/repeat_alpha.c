/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:41:11 by astefane          #+#    #+#             */
/*   Updated: 2025/02/22 17:51:50 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat_alpha(char *str)
{
	int	i;
	int	c;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			c = str[i] - 'a' + 1;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			c = str[i] - 'A' + 1;
		else
			c = 1;
		while (c--)
			write(1, &str[i], 1);
		i++;
	}

}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		repeat_alpha(argv[1]);
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
		return (0);
	}
}
