/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 20:16:34 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/22 20:25:32 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	char *iter;

	iter = dest;
	while (*iter != 0)
		iter++;
	while (*src != 0 && nb-- != 0)
		*iter++ = *src++;
	*iter = 0;
	return (dest);
}
