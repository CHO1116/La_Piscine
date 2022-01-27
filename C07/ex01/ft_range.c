/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 20:01:08 by youngjch          #+#    #+#             */
/*   Updated: 2022/01/27 16:29:37 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*num_array;

	size = max - min;
	if (size <= 0)
		return (0);
	else
	{
		num_array = (int *)malloc(sizeof(int) * size);
		if (!num_array)
			return (0);
		i = 0;
		while (i < size)
		{
			num_array[i] = min + i;
			i++;
		}
		return (num_array);
	}
}
