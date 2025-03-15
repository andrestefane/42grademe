/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 18:53:22 by astefane          #+#    #+#             */
/*   Updated: 2025/03/15 18:53:32 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	rostring(char *str)
{
	int	len;
	int	i;
	int	start;

	i = 0;
	len = 0;
	start = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	start = i;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
	{
		len++;
		i++;
	}
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		while (str[i] && str[i] != ' ' && str[i] != '\t')
		{
			write(1, &str[i], 1);
			i++;
		}
		write(1, " ", 1);
		while (str[i] == ' ' || str[i] == '\t')
			i++;
	}
	if (len > 0)
		write(1, &str[start], len);
}

int	main(int argc, char **argv)
{
	if (argc >= 2)
	{
		rostring(argv[1]);
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
		return (0);
	}
	return (0);
}
