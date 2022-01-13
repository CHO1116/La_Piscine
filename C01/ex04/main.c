#include <stdio.h>
#include "ft_ultimate_div_mod.c"
void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int		a;
	int		b;

	a = 25;
	b = 8;
	printf("a : %d, b : %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a : %d, b : %d\n", a, b);
	return (0);
}
