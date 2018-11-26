/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 18:50:07 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/28 19:24:40 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_parse_arg(char **argv2, int argc2)
{
	int				i;
	static t_sudoku	tmp_std;

	if (argc2 < 10)
		return (0);
	i = 0;
	while (i < 9 * 9)
	{
		if (argv2[i / 9][i % 9] >= '0' && argv2[i / 9][i % 9] <= '9')
			tmp_std[i / 9][i % 9] = argv2[i / 9][i % 9] - '0';
		else if (argv2[i / 9][i % 9] == '.')
			tmp_std[i / 9][i % 9] = 0;
		else
			return (0);
		i++;
	}
	return (**tmp_std);
}
