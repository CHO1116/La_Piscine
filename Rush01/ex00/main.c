/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeykim <jeykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:14:13 by youngjch          #+#    #+#             */
/*   Updated: 2022/01/16 21:04:23 by jeykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush01.h"
#include "solution.h"
#include <stdbool.h>

void	print_map(int (*return_map)[4])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 16)
	{
		j = 0;
		while (j < 4)
		{
			if (return_map[i][j] != -1)
			{
				c = '0' + return_map[i][j];
				write(1, &c, 1);
				if (i % 4 == 3)
					write(1, "\n", 1);
				else
					write(1, " ", 1);
			}
			j++;
		}
		i++;
	}
}

int	error_check_map(int (*return_map)[4])
{
	int	i;
	int	j;
	int	minus_count;

	i = 0;
	while (i < 16)
	{
		j = 0;
		minus_count = 0;
		while (j < 4)
		{
			if (return_map[i][j] == -1)
			{
				minus_count++;
			}
			j++;
		}
		if (minus_count == 4)
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

void	print_error_map(int (*return_map)[4], int input_values[], int argc)
{
	if (argc == 2)
	{
		rush(input_values, return_map, 4);
		if (error_check_map(return_map) == 0)
			print_map(return_map);
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
}

int	input_check(char	*input_array, int	*input_values)
{
	int		i;
	int		j;
	bool	in_word;

	i = 0;
	j = 0;
	in_word = false;
	while (input_array[j] != '\0')
	{
		if (in_word && input_array[j] != ' ')
		{
			write(1, "Error\n", 6);
			return (-1);
		}
		if (input_array[j] >= '1' && input_array[j] <= '4')
		{
			input_values[i] = input_array[j] - '0';
			in_word = true;
			i++;
		}
		else
			in_word = false;
		j++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		check_value;
	int		return_map[16][4];
	int		input_values[16];

	check_value = input_check(argv[1], input_values);
	if (check_value == -1)
	{
		return (0);
	}
	print_error_map(return_map, input_values, argc);
	return (0);
}
