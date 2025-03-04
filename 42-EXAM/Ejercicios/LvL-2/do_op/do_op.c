/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 20:38:41 by astefane          #+#    #+#             */
/*   Updated: 2025/02/26 20:38:41 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	do_op(char *s1, char *signe, char *s2)
{
	int	n1;
	int	n2;
	int	result;

	n1 = atoi(s1);
	n2 = atoi(s2);
	result = 0;
	if (*signe == '+')
	{
		result = n1 + n2;
		printf("%d", result);
	}
	if (*signe == '-')
	{
		result = n1 - n2;
		printf("%d", result);
	}
	if (*signe == '*')
	{
		result = n1 * n2;
		printf("%d", result);
	}
	if (*signe == '/')
	{
		result = n1 / n2;
		printf("%d", result);
	}
	if (*signe == '%')
	{
		result = n1 % n2;
		printf("%d", result);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		do_op(argv[1], argv[2], argv[3]);
		printf("\n");
	}
	else
	{
		printf("\n");
		return (0);
	}
	return (0);
}
