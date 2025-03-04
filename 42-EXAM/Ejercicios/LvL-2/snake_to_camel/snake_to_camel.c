/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 03:01:59 by astefane          #+#    #+#             */
/*   Updated: 2025/03/04 03:01:59 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	snake_to_camel(char *str)
{
	int	i;
	int	cap;

	i = 0;
	cap = 0;
	while (str[i])
	{
		if (str[i] == '_')
			cap = 1;
		else
		{
			if (cap)
            {
                if (str[i] >= 'a' && str[i] <= 'z')
                    str[i] -= 32;
            }
			write(1, &str[i], 1);
			cap = 0;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
    if (argc == 2)
        snake_to_camel(argv[1]);

    write(1, "\n", 1);
    return (0);
}