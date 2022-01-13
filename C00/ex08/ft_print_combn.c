/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:02:30 by youngjch          #+#    #+#             */
/*   Updated: 2022/01/13 16:06:22 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c);

void	ft_print_combn(int n)
{
	int		arr[10];
	int		init;
	int		index;

	init = 0;
	index = 0;
	while (init < n)
	{
		arr[init] = 0;
		init++;
	}
	while (index < n - 1)
	{
		if (index != 1)
		{
			ft_print_combn(n - 1);
		}
		while (arr[n - index - 1] <= 9)
		{
			ft_putchar(48 + arr[n - index - 1] % 10);
			arr[n - index - 1]++;
			write(1, ", ", 1);
		}
		index++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
