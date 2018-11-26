/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 13:08:27 by ccellado          #+#    #+#             */
/*   Updated: 2018/11/21 15:54:44 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != 0)
		ft_putchar(*str++);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != 0 || *s2 != 0)
		if (*s1 != *s2)
			return (*s1 - *s2);
		else
		{
			s1++;
			s2++;
		}
	return (0);
}

void	ft_int_sort_str(char **strg, int len)
{
	int		i;
	int		j;
	char	*swap;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (ft_strcmp(strg[i], strg[j]) > 0)
			{
				swap = strg[i];
				strg[i] = strg[j];
				strg[j] = swap;
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int	k;

	ft_int_sort_str(argv + 1, argc - 1);
	k = 1;
	while (k < argc)
	{
		ft_putstr(argv[k++]);
		ft_putchar('\n');
	}
	return (0);
}
