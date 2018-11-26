/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 09:17:58 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/30 15:25:53 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_descending(int *tab, int length, int (*f)(int, int))
{
	while (length-- > 1)
		if (f(tab[0], tab[1]) > 0)
			return (0);
		else
			tab++;
	return (1);
}

int	ft_is_ascending(int *tab, int length, int (*f)(int, int))
{
	while (length-- > 1)
		if (f(tab[0], tab[1]) < 0)
			return (0);
		else
			tab++;
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	return (ft_sort_ascending(tab, length, f) ||
			ft_sort_descending(tab, length, f));
}
