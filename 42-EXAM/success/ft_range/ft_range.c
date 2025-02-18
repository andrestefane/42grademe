#include <stdlib.h>

int	ft_sing(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
int	*ft_range(int start, int end)
{
	int	*result;
	int	size;
	int	i;

	i = 0;
	size = ft_sing(start - end) + 1;
	result = (int *)malloc(sizeof(int) * size);
	if (!result)
		return (NULL);
	while (i < size)
	{
		if (start <= end)
			result[i] = start + i;
		else
			result[i] = start - i;
		i++;
	}
	return (result);
}