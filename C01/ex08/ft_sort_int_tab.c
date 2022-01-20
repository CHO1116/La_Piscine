/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:45:13 by youngjch          #+#    #+#             */
/*   Updated: 2022/01/20 12:45:23 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		min;
	int		index1;
	int		index2;

	index1 = 0;
	while (index1 < size)
	{
		index2 = 0;
		while (index2 < size - 1)
		{
			if (tab[index2 + 1] < tab[index2])
			{
				min = tab[index2 + 1];
				tab[index2 + 1] = tab[index2];
				tab[index2] = min;
			}
			index2++;
		}
		index1++;
	}
}
