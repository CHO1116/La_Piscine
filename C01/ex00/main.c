#include <stdio.h>
#include "ft_ft.c"

int	main(void)
{
	int		nbr;
	int		*pointer_of_nbr;

	nbr = 1111;
	printf("The value of nbr is %d\n", nbr);
	pointer_of_nbr = &nbr;
	ft_ft(pointer_of_nbr);
	printf("The value of nbr is %d\n", nbr);
	return (0);
}
