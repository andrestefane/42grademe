#include <string.h>
#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	int	i;
	int max_value;

	i = 1;
	max_value = tab[0];
	if (!tab || len == 0)
		return (0);
	while (i < len)
	{
		if (tab[i] > max_value)
			max_value = tab[i];
		i++; 
	}
	return (max_value);
}
/*
int	main(void)
{
	int tab[] = {3, 6, 1, 2, 5, 8, 9};
	printf("El numero mas grande es %d\n", max(tab, 7));
}*/