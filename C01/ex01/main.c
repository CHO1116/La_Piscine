#include <stdio.h>
#include "ft_ultimate_ft.c"
int	main(void)
{
	int		*A;
	int		**B;
	int		***C;
	int		****D;
	int		*****E;
	int		******F;
	int		*******G;
	int		********H;
	int		*********I;
	int		nbr;

	A = &nbr;
	B = &A;
	C = &B;
	D = &C;
	E = &D;
	F = &E;
	G = &F;
	H = &G;
	I = &H;
	nbr = 2048;
	printf("%d\n", nbr);
	ft_ultimate_ft(I);
	printf("%d\n", nbr);
	return (0);
}
