#include <stdio.h>
#include "ft_strcapitalize.c"

int	main(void)
{
	char	src[] = "aDf sAdF, S!AD FS?fda s.  se1d ??s  ";
	int		index;

	index = 0;
	printf("%s\n", src);
	ft_strcapitalize(src);
	printf("%s\n", src);
	return (0);
}
