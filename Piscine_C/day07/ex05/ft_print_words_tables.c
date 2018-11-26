/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 22:53:56 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/25 22:54:50 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	my_putstr(char *s)
{
	while (*s != 0)
		ft_putchar(*s++);
}

void	ft_print_words_tables(char **tab)
{
	while (*tab != 0)
	{
		my_putstr(*tab++);
		ft_putchar('\n');
	}
}
