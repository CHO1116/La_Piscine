/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:38:01 by youngjch          #+#    #+#             */
/*   Updated: 2022/01/18 11:36:46 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	check_bool;
	int	i;

	check_bool = 1;
	i = 0;
	if (str[0] == '\0')
		return (check_bool);
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			check_bool = 0;
			break ;
		}
		i++;
	}
	return (check_bool);
}
