/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 08:36:12 by ccellado          #+#    #+#             */
/*   Updated: 2018/11/04 08:45:21 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != 0)
		ft_putchar(*str++);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != 0 || *s2 != 0)
		if (*s1 < *s2)
			return (*s1 - *s2);
		else if (*s1 > *s2)
			return (*s1 - *s2);
		else
		{
			s1++;
			s2++;
		}
	return (0);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n <= -10 || n >= 10)
		ft_putnbr(n / 10);
	else if (n < 0)
		ft_putchar('-');
	if (n < 0)
		ft_putchar((-n) % 10 + '0');
	else
		ft_putchar(n % 10 + '0');
}
