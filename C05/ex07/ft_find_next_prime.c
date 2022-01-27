/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:48:25 by youngjch          #+#    #+#             */
/*   Updated: 2022/01/27 13:06:39 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nbr)
{
	int	n;

	if (nbr < 2)
		return (1);
	n = 2;
	while (n <= nbr / n)
	{
		if (nbr % n == 0)
			return (1);
		n++;
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	unsigned int	from_nbr;
	unsigned int	to_nbr;

	if (nb < 2)
		nb = 2;
	from_nbr = nb;
	to_nbr = 2 * nb;
	while (from_nbr < to_nbr)
	{
		if (ft_is_prime(from_nbr) == 0)
			return (from_nbr);
		from_nbr++;
	}
	return (0);
}
