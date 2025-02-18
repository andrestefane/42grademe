#include <unistd.h>

void	ft_paramsum(int n)
{
	char c;
	if (n > 9)
		ft_paramsum(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}
int	main(int argc, char **argv)
{
	(void)argv;
	if (argc == 1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	else
	{
		ft_paramsum(argc - 1);
		write(1, "\n", 1);
	}
	return (0);
}