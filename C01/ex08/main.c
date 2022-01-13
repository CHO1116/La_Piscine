#include <stdio.h>
#include "ft_sort_int_tab.c"
void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int		size;
	int		i;
	int		num[6] = {911, 58, 109, 174, 527, 800};

	i = 0;
	size = 6;
	while (i < size)
	{
		printf("Before array %d : %d\n", i, num[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(num, 6);
	i = 0;
	while (i < size)
	{
		printf("After array %d : %d\n", i, num[i]);
		i++;
	}
	printf("\n");
	return (0);
}
