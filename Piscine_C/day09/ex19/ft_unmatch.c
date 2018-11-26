/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 11:24:05 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/26 11:25:44 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int	index;
	int	i;

	index = 0;
	while (index < length)
	{
		i = 0;
		while ((tab[index] != tab[i] || i == index) && i < length)
			i++;
		if (tab[index] != tab[i])
			return (tab[index]);
		++index;
	}
	return (0);
}
