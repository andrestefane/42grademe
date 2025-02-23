/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:18:09 by astefane          #+#    #+#             */
/*   Updated: 2025/02/18 15:26:29 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	num;

	num = 0;
	while (*str)
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num);
}

void	printhex(int n)
{
	char	hexa[] = "0123456789abcdef";
	if (n >= 16)
		printhex(n / 16);
	write(1, &hexa[n % 16], 1);
}
int	main(int argc, char **argv)
{
	int n;

	n = 0;
	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		printhex(n);
	}
	write(1, "\n", 1);
	return (0);
}
