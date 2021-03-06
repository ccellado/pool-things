/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 17:59:28 by ccellado          #+#    #+#             */
/*   Updated: 2018/12/03 07:28:41 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char *iter;

	iter = dest;
	while (*iter != 0)
		iter++;
	while (*src != 0)
		*iter++ = *src++;
	*iter = *src;
	return (dest);
}
