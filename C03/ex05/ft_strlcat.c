/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 20:42:22 by youngjch          #+#    #+#             */
/*   Updated: 2022/01/20 11:30:21 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_i;
	unsigned int	src_i;
	unsigned int	src_len;

	dest_i = 0;
	src_i = 0;
	src_len = 0;
	while (dest[dest_i] != '\0' && dest_i < size)
		dest_i++;
	while (src[src_len] != '\0')
		src_len++;
	while (src[src_i] != '\0' && (dest_i + src_i) < size - 1)
	{
		dest[dest_i + src_i] = src[src_i];
		src_i++;
	}
	if (dest_i + src_i < size)
		dest[dest_i + src_i] = '\0';
	return (dest_i + src_len);
}
