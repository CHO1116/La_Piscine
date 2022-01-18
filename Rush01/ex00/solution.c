/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:21:31 by youngjch          #+#    #+#             */
/*   Updated: 2022/01/16 19:21:34 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	count_values(int (*return_map)[4], int i, int j, int *count_array)
{
	int	count;
	int	k;

	count = 0;
	if (check_fixed(return_map, i * 4 + j) == -1)
	{
		k = 0;
		while (k < 4)
		{
			if (return_map[i * 4 + j][k] != -1)
			{
				count_array[return_map[i * 4 + j][k] - 1]++;
				count++;
			}
			k++;
		}
	}
}

void	value_check(int (*return_map)[4], int i, int j, int target_value)
{
	int	l;
	int	k;

	if (target_value > 0)
	{
		while (j < 4)
		{
			k = 0;
			while (k++ < 4)
			{
				if (return_map[i * 4 + j][k] == target_value)
				{
					l = 0;
					while (l++ < 4)
					{
						if (return_map[i * 4 + j][k] != target_value)
							return_map[i * 4 + j][k] = -1;
					}
					del_fix(return_map, target_value, i * 4 + j);
					break ;
				}
			}
			j++;
		}
	}
}
