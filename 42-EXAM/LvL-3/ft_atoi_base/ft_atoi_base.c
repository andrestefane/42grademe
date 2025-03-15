/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 18:53:13 by astefane          #+#    #+#             */
/*   Updated: 2025/03/05 18:56:43 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_value(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	result = 0;
	int	sign = 1;
	int	value;

	if (str_base < 2 || str_base > 16)
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while ((value = get_value(*str)) != -1 && value < str_base)
	{
		result = result * str_base + value;
		str++;
	}
	return (result * sign);
}
