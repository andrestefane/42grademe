/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 07:28:36 by astefane          #+#    #+#             */
/*   Updated: 2025/02/27 07:28:36 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n/= 2;
	return (n == 1);
}

/* int main()
{
    printf("%d\n", is_power_of_2(1));  // 1 (true)
    printf("%d\n", is_power_of_2(2));  // 1 (true)
    printf("%d\n", is_power_of_2(4));  // 1 (true)
    printf("%d\n", is_power_of_2(7));  // 0 (false)
    printf("%d\n", is_power_of_2(16)); // 1 (true)
    printf("%d\n", is_power_of_2(0));  // 0 (false)
    printf("%d\n", is_power_of_2(18)); // 0 (false)
    return 0;
}
 */