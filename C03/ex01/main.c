#include <stdio.h>
#include <string.h>
#include "ft_strncmp.c"

int	main(void)
{
	unsigned int	i;
	unsigned int	j;
	char			*str1;
	char			*str2;

	i = 0;
	j = 0;
	str1 = "Thank x s";
	str2 = "Thank X s";
	i = strncmp(str1, str2, 9);
	printf("Result of    strncmp : %d\n", i);
	j = ft_strncmp(str1, str2, 9);
	printf("Result of ft_strncmp : %d\n", j);
	return (0);
}
