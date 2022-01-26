#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	ft_print_numset(int *arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
}

void	ft_nums_up(int *arr, int n, int pre_idx)
{
	arr[pre_idx]++;
	while (pre_idx < n)
	{
		arr[pre_idx + 1] = arr[pre_idx] + 1;
		pre_idx++;
	}
}

int	ft_get_index(int *arr, int n)
{
	int i;
	int max;

	i = 0;
	max = 10 - n;
	while (i < n)
	{
		if (arr[i] == max)
			return (i - 1);
		else if (i == (n - 1) && arr[i] < max)
			return (i);
		i++;
		max++;
	}
	return (-1);
}

void	ft_print_combn(int n)
{
	int	arr[n + 1];
	int	i;
	int	pre_idx;

	if (n >= 10 || n <= 0)
		return ;
	else
	{
		i = 0;
		while (i < n)
		{
			arr[i] = i;
			i++;
		}
		while (ft_get_index(arr, n) != -1)
		{
			ft_print_numset(arr, n);
			pre_idx = ft_get_index(arr, n);
			ft_nums_up(arr, n, pre_idx);
			write(1, ", ", 2);
		}
		ft_print_numset(arr, n);
	}
}
