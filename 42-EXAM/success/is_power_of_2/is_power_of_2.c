#include <stdlib.h>
#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	return (n & (n - 1)) == 0;
}

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 		printf("%d\n", is_power_of_2(atoi(argv[1])));
// }