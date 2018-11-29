/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 17:57:07 by ccellado          #+#    #+#             */
/*   Updated: 2018/11/26 04:02:34 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
    unsigned char *c1;
	unsigned char *c2;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2; 
	while ((*c1 != 0 || *c2 != 0) && ((int)n-- > 0))
		if (*c1 < *c2)
			return (*c1 - *c2);
		else if (*c1 > *c2)
			return (*c1 - *c2);
		else
		{
			c1++;
			c2++;
		}
	return (0);
}
