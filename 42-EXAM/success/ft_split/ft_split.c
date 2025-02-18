#include <stdlib.h>

int	is_spaces(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int	word_count(char *str)
{
	int	word_count = 0;
	while (*str)
	{
		while (*str && is_spaces(*str))
			str++;
		if (*str && !is_spaces(*str))
		{
			word_count++;
			while (*str && !is_spaces(*str))
				str++;
		}
	}
	return (word_count);
}

char	*malloc_word(char *str)
{
	int		len;
	int		i;
	char	*word;

	len = 0;
	i = 0;
	while (str[len] && !is_spaces(str[len]))
		len++;
	word = (char *)malloc(sizeof(char *) * (len + 1));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char **ft_split(char *str)
{
	int		word;
	int		i;
	char 	**array;

	word = word_count(str);
	array = (char **)malloc(sizeof(char *) * (word + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && is_spaces(*str))
			str++;
		if (*str && !is_spaces(*str))
		{
			array[i] = malloc_word(str);
			if (!array)
				return (NULL);
			i++;
			while (*str && !is_spaces(*str))
				str++;
		}
	}
	array[i] = NULL;
	return (array);
}

/*#include <stdio.h>

int main()
{
    char str[] = "   Hola\tmundo\nesto es   una prueba  ";
    char **words = ft_split(str);

    for (int i = 0; words[i] != NULL; i++)
        printf("Word %d: %s\n", i, words[i]);

    return 0;
}*/