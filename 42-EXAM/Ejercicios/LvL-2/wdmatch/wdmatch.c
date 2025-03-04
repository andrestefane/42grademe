/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 03:09:31 by astefane          #+#    #+#             */
/*   Updated: 2025/03/04 03:09:31 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void wdmatch(char *s1, char *s2)
{
    int i = 0;
    int j = 0;

    while (s1[i])
    {
        while (s2[j] && s2[j] != s1[i])
            j++;
        if (!s2[j])
            return ;
        i++;
        j++;
    }
    write(1, s1, i);
}

int main(int argc, char **argv)
{
    if (argc == 3)
        wdmatch(argv[1], argv[2]);
    write(1, "\n", 1);
    return (0);
}
