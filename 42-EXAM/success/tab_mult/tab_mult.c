/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 14:45:21 by astefane          #+#    #+#             */
/*   Updated: 2025/02/22 14:54:28 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	num;

	num = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num);
}

void	ft_putnbr(int n)
{
	char	c;

	if (n > 9)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

void	tab_mult(char *str)
{
	unsigned int	num;
	unsigned int	result;
	unsigned int	mult;

	num = ft_atoi(str);
	result = 0;
	mult = 1;
	while (mult <= 9)
	{
		ft_putnbr(mult);
		write(1, " x ", 3);
		ft_putnbr(num);
		write(1, " = ", 3);
		result = mult * num;
		ft_putnbr(result);
		mult++;
		write(1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (argv[1][0] == '-')
	{
		write(1, "\n", 1);
		return (0);
	}
	else
		tab_mult(argv[1]);
	return (0);
}
