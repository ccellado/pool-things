/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 04:14:22 by ccellado          #+#    #+#             */
/*   Updated: 2018/10/26 04:14:33 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H

# include <string.h>

# define SAVE_THE_WORLD "Save"

typedef struct s_perso	t_perso;

struct	s_perso {
	char	*name;
	float	life;
	int		age;
	char	*profession;
};

#endif
