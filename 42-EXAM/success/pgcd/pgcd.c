/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 20:04:10 by astefane          #+#    #+#             */
/*   Updated: 2025/02/22 20:11:57 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int	pgcd(unsigned int num1, unsigned int num2)
{
	if (num2 == 0)
		return (num1);
	return (pgcd(num2, num1 % num2));
}

int	main(int argc, char **argv)
{
	unsigned int n1;
	unsigned int n2;
	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d", pgcd(n1, n2));
		printf("\n");
	}
	else
	{
		printf("\n");
		return (0);
	}
	return (0);
}
