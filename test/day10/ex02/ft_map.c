/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 08:58:14 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/30 15:00:42 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*result;
	int	*temp;

	result = malloc(sizeof(int) * length);
	temp = result;
	while (length--)
		*temp++ = f(*tab++);
	return (result);
}
