#include <stdio.h>
#include <string.h>
#include "ft_strcpy.c"

int	main(void)
{
	char	dest[5];
	char	*src;

	src = "ABC CDE FF";
	printf("Before dest : %s\n", dest);
	printf("copy comment : %s\n", src);
	ft_strcpy(dest, src);
	printf("After ft_strcpy : %s\n", dest);
	return (0);
}
