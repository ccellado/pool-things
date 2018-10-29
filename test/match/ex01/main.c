/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 18:04:40 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/28 18:13:38 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	nmatch(char *s1, char *s2);

#define TEST_MATCH(S1, S2) printf(#S1 " =~ " #S2 " -> %d\n", nmatch(S1, S2))

int main()
{
	TEST_MATCH("abcbd", "*b*");
	TEST_MATCH("*a*", "asdf");
	TEST_MATCH("*a", "a");
	TEST_MATCH("", "asdf");
	TEST_MATCH("", "aasdf");
	TEST_MATCH("asdf", "a**");
	TEST_MATCH("asde", "*sd*");

	printf("\n");
}
