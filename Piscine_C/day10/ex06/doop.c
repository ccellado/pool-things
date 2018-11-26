/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 10:48:52 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/30 15:07:33 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "doop_ops.h"

int				ft_atoi_small(char *str)
{
	int res;
	int sign;

	sign = ((*str == '-') * -2 + 1);
	if (*str == '-' || *str == '+')
		str++;
	res = 0;
	while (*str >= '0' && *str <= '9')
		res = res * 10 + *str++ - '0';
	return (res * sign);
}

t_op			get_operator(char *op)
{
	if (op[0] == '+' && op[1] == 0)
		return (ft_op_add);
	else if (op[0] == '-' && op[1] == 0)
		return (ft_op_subtract);
	else if (op[0] == '*' && op[1] == 0)
		return (ft_op_multiply);
	else if (op[0] == '/' && op[1] == 0)
		return (ft_op_divide);
	else if (op[0] == '%' && op[1] == 0)
		return (ft_op_modulo);
	else
		return (0);
}

void			ft_putnbr(int n)
{
	char c;

	if (n < -9 || n > 9)
		ft_putnbr(n / 10);
	else if (n < 0)
		write(1, "-", 1);
	if (n < 0)
		c = -n % 10 + '0';
	else
		c = n % 10 + '0';
	write(1, &c, 1);
}

int				main(int argc, char **argv)
{
	t_op	op;
	int		v1;
	int		v2;
	int		res;

	if (argc >= 4)
	{
		v1 = ft_atoi_small(argv[1]);
		v2 = ft_atoi_small(argv[3]);
		op = get_operator(argv[2]);
		res = 0;
		if (op == ft_op_divide && v2 == 0)
			write(1, "Error : division by zero", 24);
		else if (op == ft_op_modulo && v2 == 0)
			write(1, "Error : modulo by zero", 22);
		else if (op != 0)
		{
			res = op(v1, v2);
			ft_putnbr(res);
		}
		else
			ft_putnbr(0);
		write(1, "\n", 1);
	}
	return (0);
}
