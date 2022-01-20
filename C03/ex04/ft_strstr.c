/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstsr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 19:58:40 by youngjch          #+#    #+#             */
/*   Updated: 2022/01/20 11:39:15 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	str_i;
	int	find_i;

	if (to_find[0] == '\0')
		return (str);
	str_i = 0;
	while (str[str_i] != '\0')
	{
		find_i = 0;
		while (str[str_i + find_i] == to_find[find_i] && \
				str[str_i + find_i] != '\0')
		{
			if (to_find[find_i + 1] == '\0')
				return (&str[str_i]);
			find_i++;
		}
		str_i++;
	}
	return (0);
}
