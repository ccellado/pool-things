/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 09:34:05 by ccellado          #+#    #+#             */
/*   Updated: 2018/11/26 10:33:20 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 
#include "libft.h"
#include <stdlib.h>
 
char	*ft_strtrim(char const *s)
{
	unsigned int	begin;
	unsigned int 	len;

	len = 0;
	begin = 0;
	if (!s)
		return (NULL);
	while (s[begin] == ' ' || s[begin] == '\t' || s[begin] == '\n')
			begin++;
	if (s[begin] == '\0')
		return (ft_strdup((char *)s + begin));
	len = ft_strlen((char *)s) - 1;
	while ((s[len] == ' ' || s[len] == '\t' || s[len] == '\n') && len > 0)
		len--;
	return (ft_strsub(s, begin, len - begin + 1));
}	
