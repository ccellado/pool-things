/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 14:17:40 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/21 16:03:33 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int ix;
	int iy;

	iy = 0;
	while (iy < y)
	{
		ix = -1;
		while (++ix < x)
			if (iy == 0 && ix == 0)
				ft_putchar('/');
			else if (iy == 0 && ix == x - 1)
				ft_putchar('\\');
			else if (iy == y - 1 && ix == 0)
				ft_putchar('\\');
			else if (iy == y - 1 && ix == x - 1)
				ft_putchar('/');
			else if (iy == 0 || iy == y - 1)
				ft_putchar('*');
			else if (ix == 0 || ix == x - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
		ft_putchar('\n');
		iy++;
	}
}
