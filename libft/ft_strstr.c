/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 17:27:58 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/22 18:15:27 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *search_str;
	char *found_str;
	char *find_str;

	search_str = str;
	found_str = str;
	find_str = to_find;
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
			find_str = to_find;
			search_str = ++found_str;
			if (*search_str == 0)
				return (0);
		}
	return (found_str);
}
