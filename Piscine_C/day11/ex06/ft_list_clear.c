/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 14:43:34 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/31 14:53:55 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *iter;
	t_list *next;

	iter = *begin_list;
	while (iter != 0)
	{
		next = iter->next;
		free(iter);
		iter = next;
	}
	*begin_list = 0;
}
