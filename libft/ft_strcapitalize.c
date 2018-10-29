/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 18:32:53 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/22 18:40:38 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alphanumeric(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char *iter;

	iter = str;
	while (*iter != 0)
		if (is_alphanumeric(*iter))
		{
			if (*iter >= 'a' && *iter <= 'z')
				*iter &= 0xdf;
			iter++;
			while (is_alphanumeric(*iter))
				if (*iter >= 'A' && *iter <= 'Z')
					*iter++ |= 0x20;
				else
					iter++;
		}
		else
			iter++;
	return (str);
}
