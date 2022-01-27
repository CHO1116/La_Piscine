/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 19:20:47 by youngjch          #+#    #+#             */
/*   Updated: 2022/01/18 11:52:03 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	check_bool;
	int	i;

	check_bool = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (check_bool == 1 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			check_bool = 0;
		}
		else if (check_bool == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		else if (str[i] < '0' || (str[i] > '9' && str[i] < 'A') || \
				(str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			check_bool = 1;
		else
			check_bool = 0;
		i++;
	}
	return (str);
}
