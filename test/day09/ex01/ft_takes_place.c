/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 17:35:31 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/25 18:04:53 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place_next(int hour)
{
	if (hour == 12)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M.", hour);
		printf(" AND %d.00 P.M.\n", (hour - 11));
	}
	if (hour >= 13 && hour <= 20)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M.", (hour - 12));
		printf(" AND %d.00 P.M.\n", (hour - 11));
	}
	if (hour == 21 || hour == 22)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M.", (hour - 12));
		printf(" AND %d.00 P.M.\n", (hour - 11));
	}
	if (hour == 23)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M.", (hour - 12));
		printf(" AND %d.00 A.M.\n", (hour - 11));
	}
	if (hour == 0)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M.", (hour + 12));
		printf(" AND %d.00 A.M.\n", (hour + 1));
	}
}

void	ft_takes_place(int hour)
{
	if (hour <= 8 && hour >= 1)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M.", hour);
		printf(" AND %d.00 A.M.\n", (hour + 1));
	}
	if (hour == 9)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M.", hour);
		printf(" AND %d.00 A.M.\n", (hour + 1));
	}
	if (hour == 10)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M.", hour);
		printf(" AND %d.00 A.M.\n", (hour + 1));
	}
	if (hour == 11)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M.", hour);
		printf(" AND %d.00 P.M.\n", (hour + 1));
	}
	if (hour > 11 || hour == 0)
		ft_takes_place_next(hour);
}
