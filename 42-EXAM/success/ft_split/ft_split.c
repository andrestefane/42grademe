/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:44:22 by astefane          #+#    #+#             */
/*   Updated: 2025/02/21 18:09:56 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int	ft_wordcount(char *str)
{
	int	word;

	word = 0;
	while (*str)
	{
		while (*str && is_space(*str))
			str++;
		if (*str && !is_space(*str))
		{
			word++;
			while (*str && !is_space(*str))
				str++;
		}
	}
	return (word);
}

char	*ft_word_dupe(char *start, char *end)
{
	char	*word;
	int		len;
	int		i;

	len = end -start;
	i = 0;
	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	int		word_count;
	int		i;
	char	**result;
	char	*start;

	i = 0;
	word_count = ft_wordcount(str);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	while (*str)
	{
		while (*str && is_space(*str))
			str++;
		if (*str && !is_space(*str))
		{
			start = str;
			while (*str && !is_space(*str))
				str++;
			result[i] = ft_word_dupe(start, str);
			i++;
		}
	}
	result[i] = NULL;
	return (result);
}
