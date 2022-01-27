/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 21:01:48 by youngjch          #+#    #+#             */
/*   Updated: 2022/01/18 12:14:38 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	cnt;

	index = 0;
	cnt = 0;
	if (dest == 0 || src == 0)
		return (0);
	while (src[cnt] != '\0')
		cnt++;
	if (size != 0)
	{
		while (src[index] != '\0' && index < (size - 1))
		{
			dest[index] = src [index];
			index++;
		}
		dest[index] = '\0';
	}
	return (cnt);
}
