#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		count(char *str, int i, char c)
{
	int	n;

	n = 0;
	while (n < i)
	{
		if (str[n] == c)
			return (1);
		n++;
	}
	return (0);
}

void	inter(char *s1, char *s2)
{
	int	i;
	int j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (!count(s1, i, s1[i]) &&  s1[i] == s2[j])
			{
				ft_putchar(s1[i]);
				break;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}