#include <stdio.h>
#include "ft_sort_int_tab.c"
void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int		size;
	int		i;
	int		num[10] = {22, 5, 911, 158, 5000, 109, 174, 204, 527, 800};

	i = 0;
	size = 10;
	while (i < size)
	{
		printf("Before array %d : %d\n", i, num[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(num, 10);
	i = 0;
	while (i < size)
	{
		printf("After array %d : %d\n", i, num[i]);
		i++;
	}
	printf("\n");
	return (0);
}
