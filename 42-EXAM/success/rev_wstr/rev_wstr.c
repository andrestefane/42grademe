#include <unistd.h>
#include <stdlib.h>

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void rev_wstr(char *str)
{
    int len = ft_strlen(str);
    int i = len - 1;
    int end, start;

    while (i >= 0)
    {
        while (i >= 0 && (str[i] == ' ' || str[i] == '\t'))
            i--;
        end = i;
        while (i >= 0 && str[i] != ' ' && str[i] != '\t')
            i--;
        start = i + 1;
        if (end >= 0)
        {
            write(1, &str[start], end - start + 1);
            if (i > 0)
                write(1, " ", 1);
        }
    }
}

int main(int argc, char **argv)
{
   if (argc == 2)
    {
        rev_wstr(argv[1]);
    }
    write(1, "\n", 1);
    return (0);
}