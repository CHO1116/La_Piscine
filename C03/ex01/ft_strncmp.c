/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 14:50:45 by youngjch          #+#    #+#             */
/*   Updated: 2022/01/20 12:24:37 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char	*s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while ((s1[index] != '\0' || s2[index] != '\0') && index < n)
	{
		if (s1[index] == s2[index])
			index++;
		else
			return ((unsigned char) s1[index] - (unsigned char) s2[index]);
	}
	return (0);
}
