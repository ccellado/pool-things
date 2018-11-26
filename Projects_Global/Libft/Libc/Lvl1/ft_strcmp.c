/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 17:53:32 by ccellado          #+#    #+#             */
/*   Updated: 2018/11/26 04:02:45 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char *c1;
	unsigned char *c2;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	while (*c1 != 0 || *c2 != 0)
	{
		if (*c1 < *c2)
			return (*c1 - *c2);
		else if (*c1 > *c2)
			return (*c1 - *c2);
		else
		{
			c1++;
			c2++;
		}
	}
	return (0);
}
