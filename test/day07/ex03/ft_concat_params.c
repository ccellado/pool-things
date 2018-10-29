/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 18:20:34 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/25 14:29:27 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlen(char *str)
{
	int k;

	k = 0;
	while (*str++ != 0)
		k++;
	return (k);
}

char			*ft_concat_params(int argc, char **argv)
{
	int		size;
	int		j;
	char	*i;
	char	*buff;

	size = 0;
	j = 0;
	while (j < argc)
		size += ft_strlen(argv[j++]) + 1;
	buff = malloc(size);
	if (buff == 0)
		return (0);
	size = 0;
	j = 1;
	while (j < argc)
	{
		i = argv[j++];
		while (*i != 0)
			buff[size++] = *i++;
		buff[size++] = '\n';
	}
	buff[size - 1] = 0;
	return (buff);
}
