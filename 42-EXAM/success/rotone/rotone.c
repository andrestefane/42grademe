#include <unistd.h>

void	ft_rotone(char *str)
{
	int		i;
	char	c;

	i = 0;
	while(str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] == 'z')
			{
				write(1, "a", 1);
				i++;
			}
			else
			{
				c = str[i] + 1;
				write(1, &c, 1);
				i++;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] == 'Z')
			{
				write(1, "A", 1);
				i++;
			}
			else
			{
				c = str[i] + 1;
				write(1, &c, 1);
				i++;
			}
		}
		else
		{
			write(1, &str[i], 1);
			i++;
		}
	}
}
int main(int argc, char **argv)
{
	if (argc == 2)
		ft_rotone(argv[1]);
	write(1, "\n", 1);
	return (0);
}