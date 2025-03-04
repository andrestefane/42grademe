/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 02:51:01 by astefane          #+#    #+#             */
/*   Updated: 2025/03/04 02:51:01 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int bits;
	int	c;

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
// Función main para probar print_bits
int	main(void)
{
	unsigned char num;

	num = 2;
	print_bits(num); // Debe imprimir: 00000010
	write(1, "\n", 1);

	num = 255;
	print_bits(num); // Debe imprimir: 11111111
	write(1, "\n", 1);

	num = 128;
	print_bits(num); // Debe imprimir: 10000000
	write(1, "\n", 1);

	num = 42;
	print_bits(num); // Debe imprimir: 00101010
	write(1, "\n", 1);

	return (0);
}