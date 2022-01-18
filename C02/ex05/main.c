#include <stdio.h>
#include "ft_str_is_uppercase.c"

int	main(void)
{
	int		zero_one;
	char	*src;

	zero_one = 0;
	src = "AA AA";
	zero_one = ft_str_is_uppercase(src);
	printf("%d\n", zero_one);
	return (0);
}
