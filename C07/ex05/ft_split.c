/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:23:19 by youngjch          #+#    #+#             */
/*   Updated: 2022/01/27 15:45:49 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**array;

	i = 0;
	array = (char **)malloc(sizeof(char *) * (ft_strlen(str) + 1));
	if (!array)
		return (0);
	while (!charset)
	{
		*array[i] = charset[i];
		i++;
	}
	*array[i] = '\0';
	return (array);
}
