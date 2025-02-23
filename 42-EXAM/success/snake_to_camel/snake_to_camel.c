
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	snake_to_camel(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '_')
		{	ft_putchar(str[i + 1] - 32);
			i++;
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		snake_to_camel(argv[1]);
	write(1, "\n", 1);
	return (0);
}