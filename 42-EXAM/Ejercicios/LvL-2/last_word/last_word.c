/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 17:05:44 by astefane          #+#    #+#             */
/*   Updated: 2025/03/03 17:05:44 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	last_word(char *str)
{
	char	*end;
	char	*start;
	end = str;
	while (*end)
		end++;
	end--;
	while (end >= str && (*end == ' ' || *end == '\t'))
		end--;
	start = end;
	while (start >= str && *start != ' ' && *start != '\t')
		start--;
	start++;
	while (start <= end)
		write(1, start++, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		last_word(argv[1]);
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
		return (0);
	}
	return (0);
}
