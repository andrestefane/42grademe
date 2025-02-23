/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 09:29:40 by astefane          #+#    #+#             */
/*   Updated: 2025/02/23 09:55:42 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	num;

	num = 0;
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num);
}

int	is_prime(int num)
{
	int	i;

	i = 2;
	if (num < 2)
		return (0);
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr(int n)
{
	char	c;

	if (n > 9)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void	add_prime_sum(char *str)
{
	int	num;
	int	sum;
	int	i;

	num = ft_atoi(str);
	sum = 0;
	i = 2;
	if (num <= 0)
	{
		write(1, "0", 1);
		return ;
	}
	while (i <= num)
	{
		if (is_prime(i))
			sum += i;
		i++;
	}
	ft_putnbr(i);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		add_prime_sum(argv[1]);
		write(1, "\n", 1);
	}
	else
	{
		write(1, "0\n", 2);
		return (0);
	}
	return (0);
}
