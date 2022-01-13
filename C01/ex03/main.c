#include <stdio.h>
#include "ft_div_mod.c"

int	main(void)
{
	int		a;
	int		b;
	int		div;
	int		mod;

	a = 25;
	b = 8;
	printf("a : %d, b : %d\n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("div : %d, mod : %d\n", div, mod);
	return (0);
}
