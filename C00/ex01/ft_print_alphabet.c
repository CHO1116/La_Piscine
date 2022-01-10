/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:15:56 by youngjch          #+#    #+#             */
/*   Updated: 2022/01/10 15:31:41 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (1)
	{
		write(1, &c, 1);
		if (c == 'z')
			break ;
		c++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
