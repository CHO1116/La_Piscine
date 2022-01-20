/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:33:05 by youngjch          #+#    #+#             */
/*   Updated: 2022/01/20 11:35:56 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_i;
	unsigned int	src_i;

	dest_i = 0;
	src_i = 0;
	while (dest[dest_i] != '\0')
		dest_i++;
	while (src[src_i] != '\0' && src_i < nb)
	{
		dest[dest_i + src_i] = src[src_i];
		src_i++;
	}
	dest[dest_i + src_i] = '\0';
	return (dest);
}
