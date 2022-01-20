#include <stdio.h>
#include <string.h>
#include "ft_strstr.c"

int	main(void)
{
	char	*string;
	char	*to_find_word;
	char	*result;
	char	*ft_result;

	string = "xtaxtxtbxtcxmkx";
	to_find_word = "xtc";
	result = strstr(string, to_find_word);
	ft_result = ft_strstr(string, to_find_word);
	printf("Result of    strstr : %s\n", result);
	printf("Result of ft_strstr : %s\n", ft_result);
	return (0);
}
