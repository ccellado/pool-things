/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 08:18:41 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/26 08:19:10 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FIGHT_H
# define FT_FIGHT_H
# define KICK (0)
# define PUNCH (1)
# define HEADBUTT (2)
# define CAP(nbr) (nbr > 0 ? nbr : 0)

typedef struct	s_perso2
{
	char	*name;
	float	life;
	int		age;
	int		profession;
}				t_perso2;

#endif
