/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 23:20:40 by ccellado          #+#    #+#             */
/*   Updated: 2018/11/03 23:58:46 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "foos.h"

int		check_expr(char **exp, int sign);

int		check_queue(char **exp)
{
	int res;

	while (**exp == ' ')
		exp[0]++;
	if (**exp == '(')
	{
		exp[0]++;
		res = check_expr(exp, 1);
		while (**exp == ' ')
			exp[0]++;
		exp[0]++;
	}
	else
	{
		res = ft_atoi_small(*exp);
		if (**exp == '-' || **exp == '+')
			exp[0]++;
		while (**exp >= '0' && **exp <= '9')
			exp[0]++;
	}
	return (res);
}

int		check_expr(char **exp, int sign)
{
	int		res;
	int		rand;
	char	op;

	res = sign * check_queue(exp);
	op = check_op(exp);
	while (op == '*' || op == '/' || op == '%')
	{
		rand = check_queue(exp);
		if (op == '*')
			res *= rand;
		else if (op == '/')
			res /= rand;
		else
			res %= rand;
		op = check_op(exp);
	}
	if (op == '+')
		return (res + check_expr(exp, 1));
	else if (op == '-')
		return (res + check_expr(exp, -1));
	return (res);
}

int		eval_expr(char *exp)
{
	return (check_expr(&exp, 1));
}

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_putnbr(eval_expr(argv[1]));
		write(1, "\n", 1);
	}
}
