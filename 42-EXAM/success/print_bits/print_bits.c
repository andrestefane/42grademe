/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 09:24:14 by astefane          #+#    #+#             */
/*   Updated: 2025/02/23 09:27:39 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	bits;

	bits = 128;
	while (bits != 0)
	{
		if (octet & bits)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		bits /= 2;
	}

}
