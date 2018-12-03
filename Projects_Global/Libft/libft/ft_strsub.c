/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 08:14:24 by ccellado          #+#    #+#             */
/*   Updated: 2018/12/03 08:40:20 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*sub;

	if (!s)
		return (NULL);
	i = 0;
	sub = ft_strnew(len);
	if (sub == NULL)
		return (NULL);
	s += start;
	while (i < len)
	{
		sub[i] = s[i];
		i++;
	}
	return (sub);
}
