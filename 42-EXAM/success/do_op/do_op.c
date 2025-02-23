/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:52:24 by astefane          #+#    #+#             */
/*   Updated: 2025/02/19 16:01:57 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_do_op(char *s1, char *signe, char *s2)
{
	int	op1;
	int	op2;
	int	result;

	op1 = atoi(s1);
	op2 = atoi(s2);
	if (signe[0] == '+')
	{
		result = op1 + op2;
		printf("%d\n", result);
	}
	if (signe[0] == '-')
	{
		result = op1 - op2;
		printf("%d\n", result);
	}
	if (signe[0] == '*')
	{
		result = op1 * op2;
		printf("%d\n", result);
	}
	if (signe[0] == '/')
	{
		result = op1 / op2;
		printf("%d\n", result);
	}
	if (signe[0] == '%')
	{
		result = op1 % op2;
		printf("%d\n", result);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("\n");
		return (0);
	}
	else
		ft_do_op(argv[1], argv[2], argv[3]);
	return (0);
}
