/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 08:57:43 by ccellado          #+#    #+#             */
/*   Updated: 2018/11/04 08:57:46 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

char	position00(int column, int row, int width, int heigth)
{
	char c;
	char type;

	c = ' ';
	if (row == 1)
	{
		type = (column == width) ? 'o' : '-';
		c = (column == 1) ? 'o' : type;
	}
	else if (row == heigth)
	{
		type = (column == width) ? 'o' : '-';
		c = (column == 1) ? 'o' : type;
	}
	else if (column == 1 || column == width)
		c = '|';
	return (c);
}

char	*rush00(int width, int heigth)
{
	int		row;
	int		column;
	int		i;
	char	*str;

	str = malloc((width * heigth) + 1);
	row = 1;
	i = 0;
	if (width < 0 || heigth < 0)
		return (NULL);
	while (row <= heigth)
	{
		column = 1;
		while (column <= width)
		{
			str[i] = position00(column, row, width, heigth);
			i++;
			column++;
		}
		str[i] = '\n';
		i++;
		row++;
	}
	str[i] = '\0';
	return (str);
}
