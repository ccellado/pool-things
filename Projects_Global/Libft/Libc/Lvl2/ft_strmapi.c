/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 07:49:23 by ccellado          #+#    #+#             */
/*   Updated: 2018/11/26 07:51:17 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			j;
	char			*arr;

	i = 0;
	if (!s)
		return (NULL);
	j = ft_strlen((char *)s);
	arr = ft_strnew(j);
	if (arr == NULL)
		return (NULL);
	j = 0;
	while (*s)
			arr[j++] = f(i++,*s++);
	return (arr);
}
