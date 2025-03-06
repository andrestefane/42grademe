/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:37:26 by astefane          #+#    #+#             */
/*   Updated: 2025/03/06 15:40:41 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	gcd(unsigned int a, unsigned int b)
{
	int	temp;

	while (b)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	return (a);
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	if (a == 0 || b == 0)
		return (0);
	return (a / gdc(a, b) * b);
}
