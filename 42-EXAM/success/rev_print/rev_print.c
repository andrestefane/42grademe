/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 16:06:54 by astefane          #+#    #+#             */
/*   Updated: 2025/02/22 16:10:19 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev_print(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	while (len > 0)
		write(1, &str[--len], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		rev_print(argv[1]);
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
		return (0);
	}
	return (0);
}