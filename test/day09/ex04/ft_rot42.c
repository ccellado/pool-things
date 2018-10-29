/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 20:02:45 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/25 21:12:34 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_rot42(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = ((str[i] - 97 + 42) % 26) + 97;
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = ((str[i] - 65 + 42) % 26) + 65;
		++i;
	}
	return (str);
}

int	main(void)
{
	char str[] = "h";
	printf("%s", ft_rot42(str));	
   // printf("%s", ft_rot42("g"));	
   // printf("%s", ft_rot42("H"));		
	return (0);
}
