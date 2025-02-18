#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}
void	hidenp(char *str, char *hidden)
{
	int	i;
	int	j;
	int	len;
	int	len_s2;

	i = 0;
	j = 0;
	len = ft_strlen(str);
	len_s2 = ft_strlen(hidden);
	 while (str[i] && j < len_s2)
    {
        if (str[i] == hidden[j])
            i++;
        j++;
    }
	if (i == len)
        write(1, "1", 1);
    else
        write(1, "0", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		hidenp(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}