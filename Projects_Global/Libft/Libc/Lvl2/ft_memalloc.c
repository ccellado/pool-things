/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 05:05:43 by ccellado          #+#    #+#             */
/*   Updated: 2018/11/26 05:22:23 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t	size)
{
	void	*area;

	area = malloc(size);
	if (area == NULL)
		return (NULL);
 	ft_bzero(area,size);
	return (area);
}
