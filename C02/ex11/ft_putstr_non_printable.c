/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:10:40 by youngjch          #+#    #+#             */
/*   Updated: 2022/01/18 11:08:44 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	*base;
	int		index;

	base = "0123456789abcdef";
	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < 32)
		{
			write(1, "\\", 1);
			write(1, &base[str[index] / 16], 1);
			write(1, &base[str[index] % 16], 1);
		}
		else
			write(1, &str[index], 1);
		index++;
	}
	return ;
}		
