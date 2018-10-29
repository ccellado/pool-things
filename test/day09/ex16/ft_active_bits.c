/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 08:23:41 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/26 08:25:12 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				abs(int value)
{
	return (value < 0 ? -value : value);
}

unsigned int	ft_active_bits(int value)
{
	unsigned int	count;
	int				neg;

	count = 0;
	neg = 0;
	if (value < 0)
	{
		neg = 1;
		value++;
	}
	while (value != 0)
	{
		count += abs(value % 2);
		value /= 2;
	}
	if (neg)
		return (32 - count);
	return (count);
}
