/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 08:26:32 by ccellado          #+#    #+#             */
/*   Updated: 2018/11/26 09:33:14 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	len;
	char			*conc;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	conc = ft_strnew(len);
	if (conc == NULL)
		return (NULL);
	while (*s1)
		*conc++ = *s1++;
	while (*s2)
		*conc++ = *s2++;
	return (conc - len);
}
