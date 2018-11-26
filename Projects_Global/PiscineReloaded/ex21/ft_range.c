/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 13:40:47 by ccellado          #+#    #+#             */
/*   Updated: 2018/11/21 13:55:35 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*i;
	int	*range;

	if (min >= max)
		return (0);
	range = malloc((max - min) * sizeof(int));
	if (range == 0)
		return (0);
	i = range;
	while (min < max)
		*i++ = min++;
	return (range);
}
