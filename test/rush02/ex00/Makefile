# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccellado <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/04 08:48:16 by ccellado          #+#    #+#              #
#    Updated: 2018/11/04 08:59:07 by ccellado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =	gcc

FLAG =	-Wall -Wextra -Werror -o 

NAME =	rush_02

SRC =	rush_02.c	\
	check00.c	\
	check01.c	\
	check02.c	\
	check03.c	\
	check04.c	\
	tools.c

OBJS =	$(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	@$(CC) $(FLAG) $(NAME) $(SRC)

clean:
	@/bin/rm -f $(OBJS)

fclean: clean
	@/bin/rm -f $(NAME)

re: clean all
