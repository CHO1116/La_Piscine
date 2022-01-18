/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:26:54 by youngjch          #+#    #+#             */
/*   Updated: 2022/01/18 11:36:35 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	check_bool;
	int	i;

	check_bool = 1;
	i = 0;
	if (str[0] == '\0')
		return (check_bool);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			check_bool = 0;
			break ;
		}
		i++;
	}
	return (check_bool);
}
