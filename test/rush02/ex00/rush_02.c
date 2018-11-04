/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 08:52:48 by ccellado          #+#    #+#             */
/*   Updated: 2018/11/04 08:52:55 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

char	*find_dimensions(int *row, int *column)
{
	char	buffer;
	char	*str;
	int		i;
	int		count;

	count = 0;
	i = 0;
	str = (char*)malloc(sizeof(char) * 4194304);
	while ((read(0, &buffer, 1)))
	{
		*column = count;
		if (buffer == '\n')
		{
			count = 0;
			(*row)++;
		}
		else
			count++;
		str[i] = buffer;
		i++;
	}
	str[i] = '\0';
	return (str);
}

void	display(int row, int column, int i, int count)
{
	if (count >= 1)
		ft_putstr(" || ");
	ft_putstr("[rush-0");
	ft_putnbr(i);
	ft_putstr("] [");
	ft_putnbr(column);
	ft_putstr("] [");
	ft_putnbr(row);
	ft_putstr("]");
}

void	find_rush(char *str, int row, int column)
{
	int count;

	count = 0;
	if (ft_strcmp(str, rush00(column, row)) == 0)
		display(row, column, 0, count++);
	if (ft_strcmp(str, rush01(column, row)) == 0)
		display(row, column, 1, count++);
	if (ft_strcmp(str, rush02(column, row)) == 0)
		display(row, column, 2, count++);
	if (ft_strcmp(str, rush03(column, row)) == 0)
		display(row, column, 3, count++);
	if (ft_strcmp(str, rush04(column, row)) == 0)
		display(row, column, 4, count++);
	if (count == 0)
		ft_putstr("aucune");
}

int		main(void)
{
	int		row;
	int		column;
	char	*ret;

	row = 0;
	column = 0;
	ret = find_dimensions(&row, &column);
	if ((row * column) >= 4194304)
	{
		ft_putstr("aucune");
		return (1);
	}
	find_rush(ret, row, column);
	free(ret);
	ft_putchar('\n');
	return (0);
}
