/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 02:59:05 by astefane          #+#    #+#             */
/*   Updated: 2025/03/04 02:59:05 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char reverse_bits(unsigned char octet)
{
    unsigned char reversed;
    int i;
	
	i = 8;
	reversed = 0;
    while (i--)
    {
        reversed = (reversed << 1) | (octet & 1);
        octet >>= 1;
    }

    return reversed;
}
