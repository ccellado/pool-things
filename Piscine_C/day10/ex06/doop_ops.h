/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop_ops.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 15:06:36 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/30 15:06:39 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_OPS_H
# define DOOP_OPS_H

typedef int(*t_op)(int, int);

int ft_op_add(int a, int b);
int ft_op_subtract(int a, int b);
int ft_op_multiply(int a, int b);
int ft_op_divide(int a, int b);
int ft_op_modulo(int a, int b);

#endif
