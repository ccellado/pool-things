/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 17:41:58 by ccellado          #+#    #+#             */
/*   Updated: 2018/12/03 08:36:45 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int			len;
	char		*str;

	len = ft_strlen(s);
	len += 1;
	str = (char *)s;
	while (len--)
	{
		if (*str == (char)c)
			return (str);
		str++;
	}
	return (NULL);
}
