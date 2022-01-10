/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:45:01 by youngjch          #+#    #+#             */
/*   Updated: 2022/01/10 16:31:57 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	n;

	n = '0';
	while (1)
	{
		write(1, &n, 1);
		if (n == '9')
			break ;
		n++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
