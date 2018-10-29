/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 15:38:12 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/23 15:48:17 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int wrote;

	wrote = 0;
	if (size > 0)
	{
		while (src[wrote] != 0 && wrote < size - 1)
			*dest++ = src[wrote++];
			*dest = 0;
	}
	while (src[wrote] != 0)
		wrote++;
	return (wrote);
}
