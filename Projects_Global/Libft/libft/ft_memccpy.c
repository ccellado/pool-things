/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 14:46:21 by ccellado          #+#    #+#             */
/*   Updated: 2018/11/26 02:16:55 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *str1, void *str2, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	*dest;
	size_t			i;
	size_t			nb;

	i = 0;
	nb = n;
	dest = (unsigned char *)str1;
	src = (unsigned char *)str2;
	if (str1 && str2)
		while (i < nb)
		{
			dest[i] = src[i];
			if (src[i] == (unsigned char)c)
				return ((unsigned char *)str1 + i + 1);
			i++;
		}
	return (NULL);
}
