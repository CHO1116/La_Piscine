#include <stdio.h>
#include "ft_str_is_lowercase.c"

int	main(void)
{
	int		zero_one;
	char	*src;

	zero_one = 0;
	src = "jklsdhfgjk.";
	zero_one = ft_str_is_lowercase(src);
	printf("%d\n", zero_one);
	return (0);
}
