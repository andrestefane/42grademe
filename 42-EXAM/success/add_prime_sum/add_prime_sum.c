#include <unistd.h>

unsigned int get_number(char *str)
{
	int	i;
	unsigned	int	num;

	i = 0;
	num = 0;
	if (*str == '-')
		return (num);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (-1);
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num);
}

unsigned int is_prime(unsigned int n)
{
	unsigned int i;

	i = 2;
	if (n < 2)
		return (0);
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int add_prime_sum(int n)
{
	unsigned int sum;
	unsigned int i;

	sum = 0;
	i = 2;
	while (i <= n)
	{
		if (is_prime(i))
			sum += i;
		i++;
	}
	return (sum);
}

void	ft_putnbr(unsigned int n)
{
	char c;
	if (n > 9)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	unsigned int num;

	num = 0;
	if (argc > 2)
	{
		write(1, "0\n", 2);
		return (0);
	}
	if (argc == 1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	else
	{
		num = get_number(argv[1]);
		ft_putnbr(add_prime_sum(num));
	}
	write(1, "\n", 1);
	return (0);
}