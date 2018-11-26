/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 18:01:02 by ccellado          #+#    #+#             */
/*   Updated: 2018/11/24 19:40:03 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int i;
	unsigned int wrote;
	unsigned int overflow;

	i = 0;
	while (dest[i] != 0 && i < (unsigned int)size)
		i++;
	wrote = 0;
	if ((unsigned int)size > 0 && dest[i] == 0)
	{
		while (src[wrote] != 0 && i < (unsigned int)size - 1)
			dest[i++] = src[wrote++];
		dest[i] = 0;
	}
	overflow = 0;
	while (src[wrote++] != 0)
		overflow++;
	return (i + overflow);
}
