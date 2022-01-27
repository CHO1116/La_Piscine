/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:09:46 by youngjch          #+#    #+#             */
/*   Updated: 2022/01/18 12:00:35 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	check_bool;
	int	i;

	check_bool = 1;
	i = 0;
	if (str[0] == '\0')
		return (check_bool);
	while (str[i] != '\0')
	{
		if (str[i] < 32)
		{
			check_bool = 0;
			break ;
		}
		i++;
	}
	return (check_bool);
}
