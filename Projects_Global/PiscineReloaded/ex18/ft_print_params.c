/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 12:54:23 by ccellado          #+#    #+#             */
/*   Updated: 2018/11/21 13:07:33 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int k;

	i = 1;
	if (argc <= 1)
		return (0);
	else
	{
		while (argv[i] != '\0')
		{
			k = 0;
			while (argv[i][k] != '\0')
			{
				ft_putchar(argv[i][k]);
				k++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}
