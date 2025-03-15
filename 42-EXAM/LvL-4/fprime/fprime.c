/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 16:43:51 by astefane          #+#    #+#             */
/*   Updated: 2025/03/06 16:44:40 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

void	fprime(int n)
{
	int	divisor;

	divisor = 2;
	if (n == 1)
	{
		printf("1");
		return ;
	}
	while (divisor * divisor <= n)
	{
		while (n % divisor == 0)
		{
			printf("%d", divisor);
			if (n / divisor != 1)
				printf("*");
			n = n / divisor;
		}
		divisor++;
	}
	if (n > 1)
	{
		printf("%d", n);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		fprime(ft_atoi(argv[1]));
	}
	printf("\n");
	return (0);
}
