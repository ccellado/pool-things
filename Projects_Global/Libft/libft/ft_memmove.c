/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 13:48:07 by ccellado          #+#    #+#             */
/*   Updated: 2018/12/03 08:35:54 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned char	*buff1;
	unsigned char	*buff2;
	size_t			i;

	buff1 = (unsigned char *)str1;
	buff2 = (unsigned char *)str2;
	i = 0;
	if (buff1 < buff2)
	{
		while (i < n)
		{
			buff1[i] = buff2[i];
			i++;
		}
	}
	else if (buff1 > buff2)
	{
		i = n;
		while (i > 0)
		{
			i--;
			buff1[i] = buff2[i];
		}
	}
	return (str1);
}
