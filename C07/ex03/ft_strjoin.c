/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:52:07 by youngjch          #+#    #+#             */
/*   Updated: 2022/01/27 16:32:56 by youngjch         ###   ########.fr       */
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res_str;
	int		index;
	int		i;
	int		j;

	res_str = (char *)malloc(sizeof(char) * (ft_strlen(*strs) + 1));
	if (!res_str)
		 return (0);
	i = 0;
	index = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			res_str[index++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
			res_str[index++] = sep[j++];
		i++;
	}
	res_str[index] = '\0';
	return (res_str);
}
