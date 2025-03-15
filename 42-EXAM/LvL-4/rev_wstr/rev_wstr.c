/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 18:35:44 by astefane          #+#    #+#             */
/*   Updated: 2025/03/15 18:49:41 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str, int len)
{
	write(1, str, len);
}

void	rev_str(char *str)
{
	int	len;
	int	end;
	int	start;

	len = 0;
	while (str[len])
		len++;
	end = len - 1;
	while (end >= 0)
	{
		while (end >= 0 && (str[end] == ' ' || str[end] == '\t'))
			end--;
		start = end;
		while (start >= 0 && str[start] != ' ' && str[start] != '\t')
			start--;
		ft_putstr(&str[start + 1], end - start);
		if (start >= 0)
			write(1, " ", 1);
		end = start - 1;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	rev_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}
