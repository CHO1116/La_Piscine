/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 18:51:58 by youngjch          #+#    #+#             */
/*   Updated: 2022/01/16 19:08:23 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solution.h"
#include "rush01.h"

int	check_array_count(int count_array[])
{
	int	i;
	int	return_value;
	int	min;

	i = 0;
	return_value = 0;
	min = 999;
	while (i < 4)
	{
		if (count_array[i] <= min && count_array[i] != 0 && count_array[i] >= 2)
		{
			return_value = i + 1;
		}
		i++;
	}
	if (return_value > 0)
	{
		return (return_value);
	}
	else
	{
		return (0);
	}
}

void	init_array(int *array)
{
	int	j;

	j = 0;
	while (j < 4)
	{
		array[j] = 0;
		j++;
	}
}

void	make_solution(int (*return_map)[4], int i, int j)
{
	int	count_array[4];
	int	count;
	int	target_value;

	count = 0;
	while (i < 4)
	{
		init_array(count_array);
		j = 0;
		while (j < 4)
		{
			count_values(return_map, i, j, count_array);
			j++;
		}
		target_value = check_array_count(count_array);
		if (target_value > 0)
		{
			j = 0;
			while (j++ < 4)
				value_check(return_map, i, j, target_value);
		}
		all_check(return_map);
		i++;
	}
}
