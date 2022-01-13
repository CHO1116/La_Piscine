/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 20:05:19 by youngjch          #+#    #+#             */
/*   Updated: 2022/01/13 15:10:39 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_num(int x, int y);
void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int		x;
	int		y;

	x = 0;
	while (x <= 99)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_print_num(x, y);
			y++;
		}
		x++;
	}
}

void	ft_print_num(int x, int y)
{
	int		a;
	int		b;
	int		c;
	int		d;

	a = 48 + (x / 10);
	b = 48 + (x % 10);
	c = 48 + (y / 10);
	d = 48 + (y % 10);
	ft_putchar(a);
	ft_putchar(b);
	write(1, " ", 1);
	ft_putchar(c);
	ft_putchar(d);
	if (x == 98 && y == 99)
		return ;
	else
		write(1, ", ", 2);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
