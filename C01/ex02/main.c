#include <stdio.h>
#include "ft_swap.c"
void	ft_swap(int *a, int *b);

int	main(void)
{
	int		x;
	int		y;

	x = 122;
	y = 71;
	printf("x is %d, y is %d\n", x, y);
	ft_swap(&x, &y);
	printf("x is %d, y is %d\n", x, y);
	return (0);
}
