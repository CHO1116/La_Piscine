#include <stdio.h>
#include "ft_strlowcase.c"

int	main(void)
{
	char	src[] = "adfsADFSADFSfdas";
	int		index;

	index = 0;
	printf("%s\n", src);
	ft_strlowcase(src);
	printf("%s\n", src);
	return (0);
}
