/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 14:13:00 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/25 14:30:58 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*i;

	*range = 0;
	if (min >= max)
		return (0);
	*range = malloc((max - min) * sizeof(int));
	if (range == 0)
		return (0);
	i = *range;
	while (min < max)
		*i++ = min++;
	return (i - *range);
}
