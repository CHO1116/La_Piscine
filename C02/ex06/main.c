#include <stdio.h>
#include "ft_str_is_printable.c"

int	main(void)
{
	int		zero_one;
	char	*src;

	zero_one = 0;
	src = "Hēllõ Wôrld!";
	zero_one = ft_str_is_printable(src);
	printf("%d\n", zero_one);
	return (0);
}
