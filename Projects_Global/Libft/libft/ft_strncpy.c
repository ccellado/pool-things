/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 17:58:16 by ccellado          #+#    #+#             */
/*   Updated: 2018/12/03 07:29:00 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
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
