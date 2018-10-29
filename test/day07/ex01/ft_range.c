/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 17:42:31 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/25 14:30:34 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	*i;

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
