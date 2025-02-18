#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    search_and_replace(char *str, char *oldest, char *newone)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == *oldest)
            ft_putchar(*newone);
        else
            ft_putchar(str[i]);
        i++;
    }
}

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc < 4)
    {
        write(1, "\n", 1);
        return (0);
    }
    while (argv[2][i])
        i++;
    if (i > 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    if (argc == 4)
        search_and_replace(argv[1], argv[2], argv[3]);
    write(1, "\n", 1);
    return (0);
}