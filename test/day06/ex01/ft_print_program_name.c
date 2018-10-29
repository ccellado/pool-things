/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 14:07:01 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/24 15:06:42 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

int	main(int argc, char **argv)
{
	char *iter;

	if (argc > 0)
	{
		iter = argv[0];
		while (*iter != 0)
			ft_putchar(*iter++);
		ft_putchr('\n');
	}
	return (0);
}
