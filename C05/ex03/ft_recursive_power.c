/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:46:17 by youngjch          #+#    #+#             */
/*   Updated: 2022/01/24 14:59:41 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		nb = 1;
	else if (power < 0)
		nb = 0;
	else if (power > 1)
		nb *= ft_recursive_power(nb, power - 1);
	return (nb);
}
