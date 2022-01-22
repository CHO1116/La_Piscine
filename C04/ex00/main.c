#include <stdio.h>
#include "ft_strlen.c"

int	ft_strlen(char *str);

int	main(void)
{
	int	x;

	x = ft_strlen("");
	printf("%d\n", x);
	return (0);
}
