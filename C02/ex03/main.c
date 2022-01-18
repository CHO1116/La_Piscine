#include <stdio.h>
#include "ft_str_is_numeric.c"

int	main(void)
{
	int		zero_one;
	char	*src;

	zero_one = 0;
	src = "1234567|8945612o3567890456";
	zero_one = ft_str_is_numeric(src);
	printf("%d\n", zero_one);
	return (0);
}
