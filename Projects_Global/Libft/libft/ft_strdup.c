/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 17:55:42 by ccellado          #+#    #+#             */
/*   Updated: 2018/11/26 02:35:02 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*buff;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	buff = malloc(i * sizeof(char) + 1);
	if (buff == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		buff[i] = src[i];
		i++;
	}
	buff[i] = '\0';
	return (buff);
}
