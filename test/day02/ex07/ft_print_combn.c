/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/18 16:08:26 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/19 12:39:49 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(int *range, int n)
{
	int	number;
	int	display;

	display = 1;
	number = 0;
	while (++number < n)
		if (range[number - 1] >= range[number])
			display = 0;
	if (!display)
		return ;
	number = -1;
	while (++number < n)
		ft_putchar(range[number] + '0');
	if (range[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int number;
	int range[10];

	if (n > 10 || n < 0)
		return ;
	number = -1;
	while (++number < n)
		range[number] = number;
	while (range[0] <= (10 - n) && n >= 1)
	{
		print(range, n);
		if (n == 10)
			break ;
		range[n - 1]++;
		number = n;
		while (number && n > 1)
		{
			number--;
			if (range[number] > 9)
			{
				range[number - 1]++;
				range[number] = 0;
			}
		}
	}
}
