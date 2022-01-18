/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:09:24 by youngjch          #+#    #+#             */
/*   Updated: 2022/01/16 19:09:35 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLUTION_H
# define SOLUTION_H

void	count_values(int (*return_map)[4], int i, int j, int *count_array);
void	value_check(int (*return_map)[4], int i, int j, int target_value);
void	make_solution(int (*return_map)[4], int i, int j);

#endif
