/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 15:48:48 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/23 16:17:00 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		parse_base(char *base)
{
	int size;
	int i;

	size = 0;
	i = 0;
	while (base[size] != 0)
	{
		if (base[size] == '+' || base[size] == '-')
			return (-1);
		i = 0;
		while (base[i] != 0)
			if (base[i] == base[size] && i != size)
				return (-1);
			else
				i++;
		size++;
	}
	if (size < 2)
		return (-1);
	return (size);
}

void	recursive_putnbr_base(int nbr, char *base, int base_size)
{
	if (nbr <= -base_size || nbr >= base_size)
		recursive_putnbr_base(nbr / base_size, base, base_size);
	if (nbr < 0)
		ft_putchar(base[-(nbr % base_size)]);
	else
		ft_putchar(base[nbr % base_size]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_size;

	base_size = parse_base(base);
	if (base_size != -1)
	{
		if (nbr < 0)
			ft_putchar('-');
		recursive_putnbr_base(nbr, base, base_size);
	}
}
