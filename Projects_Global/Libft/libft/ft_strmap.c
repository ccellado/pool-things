/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 06:08:13 by ccellado          #+#    #+#             */
/*   Updated: 2018/12/03 08:37:57 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t		j;
	char		*arr;

	if (!s)
		if (!f)
			return (NULL);
	j = ft_strlen((char *)s);
	arr = ft_strnew(j);
	if (arr == NULL)
		return (NULL);
	j = 0;
	while (*s)
		arr[j++] = f(*s++);
	return (arr);
}
