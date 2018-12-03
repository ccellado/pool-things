/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 17:08:06 by ccellado          #+#    #+#             */
/*   Updated: 2018/12/03 07:42:41 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *str, const char *to_find)
{
	char *search_str;
	char *found_str;
	char *find_str;

	search_str = (char *)str;
	found_str = (char *)str;
	find_str = (char *)to_find;
	if (*search_str == 0 && *find_str != 0)
		return (0);
	while (*find_str != 0)
		if (*find_str == *search_str)
		{
			find_str++;
			search_str++;
		}
		else
		{
			find_str = (char *)to_find;
			search_str = ++found_str;
			if (*search_str == 0)
				return (0);
		}
	return (found_str);
}
