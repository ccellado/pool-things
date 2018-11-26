/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 17:58:16 by ccellado          #+#    #+#             */
/*   Updated: 2018/11/24 19:40:56 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, size_t n)
{
	char *dstcpy;

	dstcpy = dest;
	while ((int)n--)
		if (*src == 0)
			*dstcpy++ = 0;
		else
			*dstcpy++ = *src++;
	return (dest);
}
