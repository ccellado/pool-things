* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 20:55:57 by ccellado          #+#    #+#             */
/*   Updated: 2018/11/02 21:29:31 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int level_left;
	int level_right;

	if (root == 0)
		return (-1);
	level_left = btree_level_count(root->left);
	level_right = btree_level_count(root->right);
	if (level_left > level_right)
		return (level_left + 1);
	else
		return (level_right + 1);
}
