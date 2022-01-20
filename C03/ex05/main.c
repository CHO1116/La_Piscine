#include <stdio.h>
#include <string.h>
#include "ft_strlcat.c"

int	main(void)
{
	char	str1[100] = "AABAAC";
	char	str2[100] = "AABAAC";
	char	str[100] = "Fail";

	unsigned int i = strlcat(str1, str, 9);
	printf("dest : %s, return : %u\n", str1, i);
	unsigned int j = ft_strlcat(str2, str, 9);
	printf("dest : %s, return : %u\n", str2, j);
	return (0);
}
