/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 13:49:44 by ccellado          #+#    #+#             */
/*   Updated: 2018/11/24 19:49:20 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, void *str2, size_t n)
{
	unsigned char	*buff1;
	char			*buff2;

	buff1 = str1;
	buff2 = str2;
	if (str1 && str2)
		while (n--)
			*buff1++ = *buff2++;
	return (str1);
}
