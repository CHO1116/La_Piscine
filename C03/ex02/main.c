#include <stdio.h>
#include <string.h>
#include "ft_strcat.c"

int	main(void)
{
	char	str1[100] = "Hello!!!!!!";
	char	str[50] = "Bye Bye!!!!!!";
	char	str2[100] = "Hello!!!!!!";

	strcat(str1, str);
	printf("Result of    strcat : %s\n", str1);
	ft_strcat(str2, str);
	printf("Result of ft_strcat : %s\n", str2);
	return (0);
}
