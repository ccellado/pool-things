# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccellado <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/24 19:45:43 by ccellado          #+#    #+#              #
#    Updated: 2018/11/26 04:58:40 by ccellado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
CC = gcc
OBJ = Lvl1/ft_atoi.o Lvl1/ft_bzero.o Lvl1/ft_isalnum.o Lvl1/ft_isalpha.o Lvl1/ft_isascii.o\
 	Lvl1/ft_isdigit.o Lvl1/ft_isprint.o Lvl1/ft_memccpy.o Lvl1/ft_memchr.o Lvl1/ft_memcmp.o\
 	Lvl1/ft_memcpy.o Lvl1/ft_memmove.o Lvl1/ft_memset.o Lvl1/ft_strcat.o Lvl1/ft_strchr.o\
 	Lvl1/ft_strcmp.o Lvl1/ft_strcpy.o Lvl1/ft_strdup.o Lvl1/ft_strlcat.o Lvl1/ft_strlen.o\
 	Lvl1/ft_strncat.o Lvl1/ft_strncmp.o Lvl1/ft_strncpy.o Lvl1/ft_strnstr.o\
 	Lvl1/ft_strrchr.o Lvl1/ft_strstr.o Lvl1/ft_tolower.o Lvl1/ft_toupper.o   

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c -o $@ $<

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
