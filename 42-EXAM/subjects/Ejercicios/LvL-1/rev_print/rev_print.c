/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 19:15:21 by astefane          #+#    #+#             */
/*   Updated: 2025/02/26 19:15:21 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if (i > 0)
	{
		while (i-- != 0)
			write(1, &str[i], 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		rev_print(argv[1]);
		write(1, "\n",1);
	}
	else
	{
		write(1, "\n", 1);
		return (0);
	}
	return (0);
}
