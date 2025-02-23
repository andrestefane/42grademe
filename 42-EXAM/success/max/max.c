#include <stddef.h>

int	max(int* tab, unsigned int len)
{
	int	i;
	int	max;
	if (tab == 0 || tab == NULL)
		return (0);
	i = 0;
	max = 0;
	while (len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
		len--;
	}
	return (max);
}
