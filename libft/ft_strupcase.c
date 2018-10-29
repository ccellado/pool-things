/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 18:24:13 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/22 18:30:38 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char *iter;

	iter = str;
	while (*iter != 0)
		if (*iter >= 'a' && *iter <= 'z')
			*iter++ &= 0xdf;
		else
			iter++;
	return (str);
}