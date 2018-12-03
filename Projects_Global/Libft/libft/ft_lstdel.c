/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 08:25:21 by ccellado          #+#    #+#             */
/*   Updated: 2018/12/03 08:31:03 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst;
	t_list	*nxtlst;

	lst = *alst;
	if (alst && del)
		while (lst)
		{
			nxtlst = lst->next;
			del(lst->content, lst->content_size);
			free(lst);
			lst = nxtlst;
		}
	*alst = NULL;
}
