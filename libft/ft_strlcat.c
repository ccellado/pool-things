/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 20:28:09 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/22 22:47:41 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int wrote;
	unsigned int overflow;

	i = 0;
	while (dest[i] != 0 && i < size)
		i++;
	wrote = 0;
	if (size > 0 && dest[i] == 0)
	{
		while (src[wrote] != 0 && i < size - 1)
			dest[i++] = src[wrote++];
		dest[i] = 0;
	}
	overflow = 0;
	while (src[wrote++] != 0)
		overflow++;
	return (i + overflow);
}
