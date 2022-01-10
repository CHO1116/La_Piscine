/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:42:15 by youngjch          #+#    #+#             */
/*   Updated: 2022/01/10 20:04:02 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_num(char x, char y, char z);

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	while (x <= '9')
	{
		y = x + 1;
		while (y <= '9')
		{
			z = y + 1;
			while (z <= '9')
			{
				ft_print_num(x, y, z);
				if (x == '7' && y == '8' && z == '9')
					break ;
				write(1, ", ", 2);
				z++;
			}
			y++;
		}
		x++;
	}
}

void	ft_print_num(char x, char y, char z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
