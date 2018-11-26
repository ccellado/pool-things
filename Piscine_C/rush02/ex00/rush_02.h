/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 08:53:38 by ccellado          #+#    #+#             */
/*   Updated: 2018/11/04 08:53:45 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_putnbr(int nb);

int		ft_strcmp(char *s1, char *s2);

char	position00(int column, int row, int width, int heigth);

char	*rush00(int width, int heigth);

char	position01(int column, int row, int width, int heigth);

char	*rush01(int width, int heigth);

char	position02(int column, int row, int width, int heigth);

char	*rush02(int width, int heigth);

char	position03(int column, int row, int width, int heigth);

char	*rush03(int width, int heigth);

char	position04(int column, int row, int width, int heigth);

char	*rush04(int width, int heigth);

#endif
