/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:42:47 by youngjch          #+#    #+#             */
/*   Updated: 2022/01/18 11:37:09 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	check_bool;
	int	i;

	check_bool = 1;
	i = 0;
	if (str[0] == '\0')
		return (check_bool);
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			check_bool = 0;
			break ;
		}
		i++;
	}
	return (check_bool);
}
