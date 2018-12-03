/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 10:34:08 by ccellado          #+#    #+#             */
/*   Updated: 2018/12/03 08:44:44 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_wordcount(char *str, char c)
{
	int status;
	int words;
	int i;

	status = 1;
	words = 0;
	i = 0;
	while (str[i] != '\0')
		if (str[i] != c && status == 1)
		{
			words++;
			status = 0;
			i++;
		}
		else
		{
			status = 1;
			i++;
		}
	return (words);
}

static int		ft_sp_strlen(char *str, char c)
{
	int len;

	len = 0;
	while (*str != 0 && *str != c)
	{
		len++;
		str++;
	}
	return (len);
}

static char		*ft_strndup(char *source, int n)
{
	char	*res;
	int		i;

	res = malloc(n + 1);
	if (res == 0)
		return (0);
	i = 0;
	while (i < n)
		res[i++] = *source++;
	res[i] = 0;
	return (res);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	char	**arr;
	char	*iter;
	char	**dest;

	if (!s)
		return (NULL);
	i = ft_wordcount((char *)s, c);
	arr = malloc((i + 1) * sizeof(char*));
	if (arr == NULL)
		return (NULL);
	dest = arr;
	iter = (char *)s;
	while (*iter != 0)
	{
		if (ft_sp_strlen(iter, c) > 0)
			*dest++ = ft_strndup(iter, ft_sp_strlen(iter, c));
		iter += ft_sp_strlen(iter, c);
		iter += *iter != 0;
	}
	*dest = 0;
	return (arr);
}
