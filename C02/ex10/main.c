#include <stdio.h>
#include "ft_strlcpy.c"

int	main(void)
{
	char	dest[] = "";
	char	src[] = "";
	int		size;

	size = 10;
	printf("Before\n\tsrc : %s\n\tdest : %s\n\tsize : %d\n", src, dest, size);
	size = ft_strlcpy(dest, src, size);
	printf("After \n\tsrc : %s\n\tdest : %s\n\tsize : %d\n", src, dest, size);
	return (0);
}
