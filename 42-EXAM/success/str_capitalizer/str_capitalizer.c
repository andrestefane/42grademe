#include <unistd.h>

void	capitalizer(char *s)
{
	int	i;

	i = 0;
	if (s[i] >= 'a' && 'z' >= s[i])
		s[i] -= 32;
	write(1, &s[i], 1);
	while (s[++i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		if ((s[i] >= 'a' && s[i] <= 'z') && (s[i - 1] == ' ' || s[i - 1] == '\t'))
			s[i] -= 32;
		write(1, &s[i], 1);
	}
}
int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		write(1, "\n", 1);
	while (i < argc)
	{
		capitalizer(argv[i]);
		write(1, "\n", 1);
		i += 1;
	}
}
