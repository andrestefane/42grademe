/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:50:02 by astefane          #+#    #+#             */
/*   Updated: 2025/03/06 15:57:55 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	pgcd(int n1, int n2)
{
	if (n2 == 0)
		return (n1);
	return (pgcd(n2, n1 % n2));
}


int	main(int argc, char **argv)
{
	int	n1;
	int	n2;

	n1 = 0;
	n2 = 0;
	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		if (n1 > 0 && n2 > 0)
			printf("%d\n", pgcd(n1, n2));
	}
	else
	{
		printf("\n");
		return (0);
	}
	return (0);
}
