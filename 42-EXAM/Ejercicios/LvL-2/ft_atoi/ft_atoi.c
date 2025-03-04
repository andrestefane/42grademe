/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 20:45:03 by astefane          #+#    #+#             */
/*   Updated: 2025/02/26 20:45:03 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' ||
		*str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
/* int main(void)
{
	printf("%d\n", ft_atoi("   -42"));      // -42
	printf("%d\n", ft_atoi("   +123abc"));  // 123
	printf("%d\n", ft_atoi(" 456  "));     // 456
	printf("%d\n", ft_atoi("   0"));        // 0
	printf("%d\n", ft_atoi("-2147483648")); // -2147483648
	printf("%d\n", ft_atoi("2147483647"));  // 2147483647
} */