/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 14:06:50 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/31 21:12:20 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *iter;

	if (*begin_list == 0)
		*begin_list = ft_create_elem(data);
	else
	{
		iter = *begin_list;
		while (iter->next != 0)
			iter = iter->next;
		iter->next = ft_create_elem(data);
	}
}
