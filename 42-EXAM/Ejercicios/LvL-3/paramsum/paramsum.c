/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:45:27 by astefane          #+#    #+#             */
/*   Updated: 2025/03/06 15:48:53 by astefane         ###   ########.fr       */
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
	if (argc != 1)
	{
		paramsum(argc - 1);
		write(1, "\n", 1);
	}
	return (0);
}
