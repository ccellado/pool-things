/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 18:02:17 by ccellado          #+#    #+#             */
/*   Updated: 2018/11/24 19:40:33 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char *src, size_t nb)
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
