
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

/* int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 1)
	{
		while (i < argc)
		{
			ft_putstr(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
	{
		write(1, "\n", 1);
		return (0);
	}
	return (0);
}
 */