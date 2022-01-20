#include <stdio.h>
#include <string.h>
#include "ft_strcmp.c"

int	main(void)
{
	unsigned int	i;
	unsigned int	j;
	char			*str1;
	char			*str2;

	i = 0;
	j = 0;
	str1 = "Thanks adfs adiffff";
	str2 = "Thanks adfs ad";
	i = strcmp(str1, str2);
	printf("Result of    strcmp : %d\n", i);
	j = ft_strcmp(str1, str2);
	printf("Result of ft_strcmp : %d\n", j);
	return (0);
}
