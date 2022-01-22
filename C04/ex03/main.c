#include <stdio.h>
#include "ft_atoi.c"
int	ft_atoi(char *str);

int	main(void)
{
	printf("%d\n", ft_atoi("--++-+1234"));
	printf("%d\n", ft_atoi("- -++-+1234"));
	printf("%d\n", ft_atoi("	--++-+1234"));
	printf("%d\n", ft_atoi("--++-+ 1234"));
	printf("%d\n", ft_atoi("--++-+12 34"));
	printf("%d\n", ft_atoi("--++-+a1234"));
	return (0);
}
