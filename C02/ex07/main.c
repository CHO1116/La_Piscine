#include <stdio.h>
#include "ft_strupcase.c"

int	main(void)
{
	char	*src;
	char	upstr[10];
	int		index;

	src = "as\nsaad";
	index = 0;
	while (index < 10)
	{
		upstr[index] = src[index] + 0;
		index++;
	}
	printf("Before : %s\n", src);
	ft_strupcase(upstr);
	printf("After : %s\n", upstr);
	return (0);
}
