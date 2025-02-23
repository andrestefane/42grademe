#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	fprime(char *str)
{
	int	num;
	int	i;
	int	first;

	i = 2;
	num = atoi(str);
	first = 1;
	if (num == 1)
	{
		printf("1");
		return ;
	}

	while (i <= num)
	{
		while (num % i == 0) 
		{
			if (!first)
				printf("*");
			printf("%d", i);
			num /= i;
			first = 0;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		fprime(argv[1]);
		printf("\n");
	}
	else
	{
		printf("\n");
		return (0);
	}
}
