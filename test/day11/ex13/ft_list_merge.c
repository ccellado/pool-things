/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 19:19:52 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/31 19:22:47 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *iter;

	if (*begin_list1 == 0)
		*begin_list1 = begin_list2;
	else
	{
		iter = *begin_list1;
		while (iter->next != 0)
			iter = iter->next;
		iter->next = begin_list2;
	}
}
