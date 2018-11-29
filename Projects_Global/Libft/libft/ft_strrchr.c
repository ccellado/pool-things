/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 17:14:19 by ccellado          #+#    #+#             */
/*   Updated: 2018/11/26 02:56:34 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	char		*str;
	int		len;

	str = s;
	len = ft_strlen(str);
	len += 1;
	while (len--)
	{
		if (str[len] == (char)c)
			return (&str[len]);
	}
	return (NULL);
}
