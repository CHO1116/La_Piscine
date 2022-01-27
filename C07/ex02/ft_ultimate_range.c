/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:a6:25 by youngjch          #+#    #+#             */
/*   Updated: 2022/01/27 16:31:05 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
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
			return (-1);
		i = 0;
		while (i < size)
		{
			num_array[i] = min + i;
			i++;
		}
		*range = num_array;
		return (i);
	}
}
