/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 21:54:21 by youngjch          #+#    #+#             */
/*   Updated: 2022/01/24 10:55:52 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c);
void	ft_print(int nb, char **result);

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	if (argc > 1)
	{
		while (i < argc - 1)
		{
			j = 0;
			while (argv[i][j] == argv[i + 1][j])
				j++;
			if (argv[i][j] > argv[i + 1][j])
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
				i = 0;
			}
			i++;
		}
		ft_print(argc, argv);
	}
	return (0);
}

void	ft_print(int nb, char **result)
{
	int	x;
	int	y;

	x = 1;
	while (x < nb)
	{
		y = 0;
		while (result[x][y] != '\0')
		{
			write(1, &result[x][y], 1);
			y++;
		}
		write(1, "\n", 1);
		x++;
	}
}
