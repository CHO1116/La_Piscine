/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:25:42 by youngjch          #+#    #+#             */
/*   Updated: 2022/01/10 14:37:46 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while (1)
	{
		write(1, &c, 1);
		if (c == 'a')
			break ;
		c--;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
