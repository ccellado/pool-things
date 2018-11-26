/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 19:41:24 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/31 19:50:12 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_length(t_list *list)
{
	int len;

	len = 0;
	while (list != 0)
	{
		list = list->next;
		len++;
	}
	return (len);
}

t_list	*ft_list_forward(t_list *list, int pos)
{
	while (pos-- > 0)
		list = list->next;
	return (list);
}

void	ft_swap(t_list *l1, t_list *l2)
{
	void *swap;

	swap = l1->data;
	l1->data = l2->data;
	l2->data = swap;
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	int len;
	int i;

	len = ft_list_length(begin_list);
	i = 0;
	while (i < len / 2)
	{
		ft_swap(
				ft_list_forward(begin_list, i),
				ft_list_forward(begin_list, len - i - 1));
		i++;
	}
}
