/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:13:59 by youngjch          #+#    #+#             */
/*   Updated: 2022/01/20 11:17:57 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	dest_i;
	int	src_i;

	dest_i = 0;
	src_i = 0;
	while (dest[dest_i] != '\0')
		dest_i++;
	while (src[src_i] != '\0')
	{
		dest[dest_i] = src[src_i];
		dest_i++;
		src_i++;
	}
	dest[dest_i] = '\0';
	return (dest);
}
