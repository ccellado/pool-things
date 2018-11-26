/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 17:55:08 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/31 17:56:13 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void*),
		void *data_ref, int (*cmp)())
{
	t_list *iter;

	iter = begin_list;
	while (iter != 0)
	{
		if (cmp(iter->data, data_ref) == 0)
			f(iter->data);
		iter = iter->next;
	}
}
