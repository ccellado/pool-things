/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 17:59:46 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/28 18:01:28 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nmatch(char *s1, char *s2)
{
	int i;
	int matches;

	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s2 == '*')
	{
		i = 0;
		matches = 0;
		while (s1[i] != '\0')
			matches += nmatch(s1 + i++, s2 + 1);
		matches += nmatch(s1 + i, s2 + 1);
		return (matches);
	}
	else if (*s1 == *s2)
		return (nmatch(s1 + 1, s2 + 1));
	else
		return (0);
}
