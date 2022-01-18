#include <stdio.h>
#include "ft_strlen.c"
int		ft_strlen(char *str);

int	main(void)
{
	int		length;
	char	str[1000] = "Hello!!";

	length = ft_strlen(str);
	printf("Length of str is %d\n", length);
	return (0);
}
