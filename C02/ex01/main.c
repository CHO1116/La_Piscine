#include <stdio.h>
#include <string.h>
#include "ft_strncpy.c"

int	main(void)
{
	char	dest[100000] = "";
	char	*src;

	src = "42SEOUL";
	printf("Before dest : %s\n", dest);
	printf("copy comment : %s\n", src);
	strncpy(dest, src, 5);
	printf("After strncpy : %s\n", dest);
	ft_strncpy(dest, src, 5);
	printf("After ft_strncpy : %s\n", dest);
	return (0);
}
