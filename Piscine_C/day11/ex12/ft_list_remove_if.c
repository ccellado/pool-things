/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 18:59:35 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/31 19:18:53 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *prev;
	t_list *iter;
	t_list *next;

	prev = 0;
	iter = *begin_list;
	while (iter != 0)
	{
		next = iter->next;
		if (cmp(iter->data, data_ref) == 0)
		{
			free(iter);
			if (*begin_list == iter)
				*begin_list = next;
			else if (prev != 0)
				prev->next = next;
		}
		else
			prev = iter;
		iter = next;
	}
}
