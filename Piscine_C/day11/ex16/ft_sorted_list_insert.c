/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 20:22:36 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/31 20:24:51 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list *prev;
	t_list *iter;

	prev = 0;
	iter = *begin_list;
	while (iter != 0 && cmp(iter->data, data) <= 0)
	{
		prev = iter;
		iter = iter->next;
	}
	if (prev == 0)
	{
		*begin_list = ft_create_elem(data);
		(*begin_list)->next = iter;
	}
	else
	{
		prev->next = ft_create_elem(data);
		prev->next->next = iter;
	}
}
