/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 12:07:21 by youngjch          #+#    #+#             */
/*   Updated: 2022/01/22 18:08:01 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int		is_invalid(char *base);
void	ft_putnbr_base_recurcive(int nbr, char *base, int size);

void	ft_putnbr_base(int nbr, char *base)
{
	int	index;

	index = is_invalid(base);
	if (index != 0)
		ft_putnbr_base_recurcive(nbr, base, index);
}

void	ft_putnbr_base_recurcive(int nbr, char *base, int size)
{
	unsigned int	num;
	char			ch;

	if (nbr < 0)
	{
		write(1, "-", 1);
		num = nbr * (-1);
	}
	else
		num = nbr;
	if (num >= (unsigned int) size)
		ft_putnbr_base_recurcive(num / size, base, size);
	ch = base[num % size];
	write(1, &ch, 1);
}

int	is_invalid(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}
