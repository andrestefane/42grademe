/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:46:17 by astefane          #+#    #+#             */
/*   Updated: 2025/02/03 17:56:46 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	rev_str(char *str)
{
	int		len;
	char	*temp;
	char	*rev;

	temp = str;
	rev = NULL;
	len = ft_strlen(temp);
	len--;
	while (temp[len])
	{
		if (temp[len - 1] == ' ')
		{
			rev = &temp[len];
			while (*rev && *rev != ' ')
			{
				ft_putchar(*rev);
				rev++;
			}
			ft_putchar(' ');
		}
		else if (len == 0)
		{
			rev = &temp[len];
			while (*rev && *rev != ' ')
			{
				ft_putchar(*rev);
				rev++;
			}
			}
			len--;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rev_str(argv[1]);
	write(1, "\n", 1);
}
