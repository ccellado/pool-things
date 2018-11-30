/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 13:48:07 by ccellado          #+#    #+#             */
/*   Updated: 2018/11/26 00:50:56 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, void *str2, size_t n)
{
 	unsigned char	*buff1;
	unsigned char	*buff2;  
	size_t		i;

	buff1 = str1;
	buff2 = str2;
	i = 0;
	if (str1 && str2)
	{
		if (buff1 < buff2)
		{
			i = 0;
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
	}
	return (str1);
}
