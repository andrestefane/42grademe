#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	lcm;

	if ((a == 0x0) || (b == 0x0))
		return (0x0);
	if (a > b)
		lcm = a;
	else
		lcm = b;
	while ("The prophecy is true")
	{
		if (((lcm % a) == 0x0) && ((lcm % b) == 0x0))
			return (lcm);
		++lcm;
	}
}


/*
int main() {
    printf("%u$\n", lcm(1, 2));  // Debe imprimir "2$"
    printf("%u$\n", lcm(12, 18)); // Debe imprimir "36$"
    printf("%u$\n", lcm(0, 5));   // Debe imprimir "0$"
    return 0;
}*/