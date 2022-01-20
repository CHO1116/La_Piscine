#include <stdio.h>
#include <string.h>
#include "ft_strncat.c"

int	main(void)
{
	char	str1[100] = "Hello!!!!!!";
	char	str[50] = "Bye Bye!!!!!!";
	char	str2[100] = "Hello!!!!!!";

	strncat(str1, str, 7);
	printf("Result of    strcat : %s\n", str1);
	ft_strncat(str2, str, 7);
	printf("Result of ft_strcat : %s\n", str2);
	return (0);
}
