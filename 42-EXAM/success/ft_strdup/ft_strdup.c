#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
char    *ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*result;

	i = 0;
	len = ft_strlen(src);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	while (src[i])
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
int	main(void)
{
	char *s1 = {"HOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHO                                                                                                                                                                                                                                                                                                LAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETALHOLAQUETAL"};
	char *s2 = ft_strdup(s1);
	printf("esta es la string dupeada %s\n", s2);
}*/