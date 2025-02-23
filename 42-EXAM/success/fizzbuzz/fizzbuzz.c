/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 19:52:09 by astefane          #+#    #+#             */
/*   Updated: 2025/02/20 20:19:06 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char	c;

	if (n > 9)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

void	fizzbuzz(int n)
{
	while (n <= 100)
	{
		if (n % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (n % 3 == 0)
			write(1, "fizz", 4);
		else if (n % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(n);
		write(1, "\n", 1);
		n++;
	}
}

int	main(void)
{
	int	i;

	i = 1;
	fizzbuzz(i);
	return (0);
}
