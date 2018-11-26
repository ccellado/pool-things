/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 05:36:58 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/26 05:38:37 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_compact(char **tab, int length)
{
	int	index;
	int	size;

	index = 0;
	size = length;
	while (index < length)
	{
		if (!tab[index])
			size--;
	}
	return (size);
}
