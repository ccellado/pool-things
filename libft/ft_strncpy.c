/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 17:02:04 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/22 17:06:00 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *dstcpy;

	dstcpy = dest;
	while (n--)
		if (*src == 0)
			*dstcpy++ = 0;
		else
			*dstcpy++ = *src++;
	return (dest);
}
