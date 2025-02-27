
#include <unistd.h>
#include <string.h>
#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

/* int main(void)
{
    char src[] = "Hola, mundo!";
    char dest[50];

    printf("Antes de copiar: %s\n", dest);
    ft_strcpy(dest, src);
    printf("Después de copiar: %s\n", dest);

    return 0;
}
 */