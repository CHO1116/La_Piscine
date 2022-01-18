#include <stdio.h>
#include "ft_putstr_non_printable.c"

int	main(void)
{
	char	src[] = "A\aA\bA\tA\nA\vA\fA\rA\eA";

	printf("%s\n", src);
	ft_putstr_non_printable(src);
	return (0);
}
