/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 14:36:53 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/31 21:23:05 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*iter;
	int		i;
	t_list	*buff;

	if (ac <= 0)
		return (NULL);
	i = 0;
	buff = NULL;
	while (i < ac)
	{
		iter = ft_create_elem(av[i]);
		iter->next = buff;
		buff = iter;
		++i;
	}
	return (iter);
}
