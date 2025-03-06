/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:26:47 by astefane          #+#    #+#             */
/*   Updated: 2025/03/05 15:44:45 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	result;

	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result);
}

void	ft_putnbr(int n)
{
	char	c;

	if (n > 9)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int	is_prime(int n)
{
	int	i;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	add_prime(char *str)
{
	int	n;
	int	i;
	int	sum;

	n = ft_atoi(str);
	if (n <= 0)
	{
		write(1, "0\n", 2);
		return ;
	}
	i = 2;
	sum = 0;
	while (i <= n)
	{
		if (is_prime(i) == 1)
			sum += i;
		i++;
	}
	ft_putnbr(sum);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	if (argc == 2)
	{
		add_prime(argv[1]);
		write(1, "\n", 1);
	}
	return (0);
}
