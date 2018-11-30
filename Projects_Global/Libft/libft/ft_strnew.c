/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 05:35:40 by ccellado          #+#    #+#             */
/*   Updated: 2018/11/26 05:45:08 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*all;
	char	*tall;

	all = (char *)malloc(sizeof(char) * (unsigned long)size + 1);
	if (all == NULL)
		return (NULL);
	tall = all;
	while (*tall)
		*tall++ = '\0';
	return (all);
}
