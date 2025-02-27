
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/* int	main(void)
{
	int	n1;
	int	n2;

	n1 = 1;
	n2 = 2;
	ft_swap(&n1, &n2);
	printf("%d\n", n1);
	printf("%d\n", n2);
	return (0);
} */