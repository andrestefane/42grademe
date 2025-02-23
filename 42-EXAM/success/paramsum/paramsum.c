/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:36:42 by astefane          #+#    #+#             */
/*   Updated: 2025/02/22 13:40:28 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	paramsum(int n)
{
	char	c;

	if (n > 9)
		paramsum(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	else
	{
		paramsum(argc - 1);
		write(1, "\n", 1);
	}
	return (0);
}
