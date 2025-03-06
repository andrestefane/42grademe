/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:59:37 by astefane          #+#    #+#             */
/*   Updated: 2025/03/06 16:08:44 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	result;

	result = 0;
	if (str[0] == '-')
		return (0);
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result);
}

void	print_hex(int n)
{
	char c[] = "0123456789abcdef";
	if (n > 16)
		print_hex(n / 16);
	write(1, &c[n % 16], 1);
}

int	main(int argc, char **argv)
{
	int	n;

	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		print_hex(n);
		write(1, "\n", 1);
	}
	else
	{
		wirte(1, "\n", 1);
		return (0);
	}
	return (0);
}
