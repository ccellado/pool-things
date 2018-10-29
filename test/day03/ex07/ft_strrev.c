/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/18 19:00:43 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/19 12:05:40 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		k;
	int		size;
	char	buff;

	k = 0;
	while (str[k] != '\0')
		k++;
	k = k - 1;
	size = 0;
	while (size < ((k + 1) / 2))
	{
		buff = str[size];
		str[size] = str[k - size];
		str[k - size] = buff;
		size++;
	}
	return (str);
}
