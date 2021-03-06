/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 22:06:24 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/25 22:06:44 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_button(int i, int j, int k)
{
	if ((i > k && i < j) || (i > j && i < k))
		return (i);
	if ((j > k && j < i) || (j > i && j < k))
		return (j);
	if ((k > i && k < j) || (k > j && k < i))
		return (k);
	return (0);
}
