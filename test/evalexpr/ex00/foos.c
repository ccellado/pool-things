/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   foos.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 22:51:32 by ccellado          #+#    #+#             */
/*   Updated: 2018/11/04 00:51:36 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi_small(char *str)
{
	int res;
	int sign;

	sign = (*str != '-') * 2 - 1;
	if (*str == '-' || *str == '+')
		str++;
	res = 0;
	while (*str >= '0' && *str <= '9')
		res = res * 10 + *str++ - '0';
	return (res * sign);
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

char	check_op(char **exp)
{
	char op;

	op = '\0';
	while (**exp == ' ')
		exp[0]++;
	if (**exp == '+')
		op = **exp;
	if (**exp == '-')
		op = **exp;
	if (**exp == '*')
		op = **exp;
	if (**exp == '/')
		op = **exp;
	if (**exp == '%')
		op = **exp;
	if (op != '\0')
		exp[0]++;
	return (op);
}
