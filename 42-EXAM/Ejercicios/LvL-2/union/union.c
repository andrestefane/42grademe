/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 03:08:08 by astefane          #+#    #+#             */
/*   Updated: 2025/03/04 03:08:08 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int has_char(char *str, char c, int index)
{
    int i = 0;
    while (i < index)
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

void ft_union(char *s1, char *s2)
{
    int i = 0;
    int j = 0;

    while (s1[i])
    {
        if (!has_char(s1, s1[i], i))
            write(1, &s1[i], 1);
        i++;
    }

    while (s2[j])
    {
        if (!has_char(s1, s2[j], i) && !has_char(s2, s2[j], j))
            write(1, &s2[j], 1);
        j++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 3)
        ft_union(argv[1], argv[2]);
    write(1, "\n", 1);
    return (0);
}
