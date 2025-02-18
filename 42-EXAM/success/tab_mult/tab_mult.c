#include <unistd.h>

void ft_putnbr(int nb)
{
    if (nb < 0)
        nb = -nb;
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
    }
    nb = nb % 10 + '0';
    write(1, &nb, 1);
}
void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int     ft_atoi(char *str)
{
    int i;
    int res;

    i = 0;
    res = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return (res);
}

void    tab(char *str)
{
    int n;
    int i;
    int result;
    n = ft_atoi(str);
    i = 1;
    while (i <= 9)
    {
        result = n * i;
        ft_putnbr(i);
        ft_putstr(" x ");
        ft_putnbr(n);
        ft_putstr(" = ");
        ft_putnbr(result);
        write(1, "\n", 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
       tab(argv[1]);
    }
    else
    {
        write(1, "\n", 1);
    }
    return (0);
}