/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 18:02:17 by ccellado          #+#    #+#             */
/*   Updated: 2018/12/03 07:28:26 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	char *iter;

	iter = dest;
	while (*iter != 0)
		iter++;
	while (*src != 0 && (int)nb-- != 0)
		*iter++ = *src++;
	*iter = 0;
	return (dest);
}
