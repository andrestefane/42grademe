#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	repeat_alpha(char *str)
{
	int	i;
	int	result;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			result = str[i] - 'a' + 1;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			result = str[i] - 'A' + 1;
		else
			result = 1;
		while (result--)
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}
