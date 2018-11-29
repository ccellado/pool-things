/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 17:41:58 by ccellado          #+#    #+#             */
/*   Updated: 2018/11/26 02:50:47 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	int 		len;
	char		*str;

	len = ft_strlen(s);
	len += 1;
	str = s;
	while (len--)
	{
		if (*str == (char)c)
			return (str);
		str++;
	}
	return (NULL);
}
