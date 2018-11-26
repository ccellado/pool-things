/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccellado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 19:05:34 by ccellado          #+#    #+#             */
/*   Updated: 2018/11/26 13:45:51 by ccellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

void			*ft_memset(void *str, int c, size_t n);
void			ft_bzero(void *str, size_t n);
void			*ft_memcpy(void *str1, void *str2, size_t n);
void			*ft_memccpy(void *str1, void *src, int c, size_t n);
void			*ft_memmove(void *str1, void *str2, size_t n);
void			*ft_memchr(void *str, int c, size_t n);
int				ft_memcmp(void *str1, void *str2, size_t n);

int				ft_strlen(char *str);
char			*ft_strdup(char *src);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strncpy(char *dest, char *src, size_t n);
char			*ft_strcat(char *dest, char *src);
char			*ft_strncat(char *dest, char *src, size_t nb);
size_t			ft_strlcat(char *dest, char *src, size_t size);
char			*ft_strchr(char *s, int c);
char			*ft_strrchr(char *s, int c);
char			*ft_strstr(char *str, char *to_find);
char			*ft_strnstr(char *str, char *to_find, size_t len);
int				ft_strcmp(char *s1, char *s2);
int				ft_strncmp(char *s1, char *s2, size_t n);
int				ft_atoi(char *str);

int				ft_isspace(int c);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_tolower(int c);
int				ft_toupper(int c);

void			*ft_memalloc(size_t	size);
void			ft_memdel(void **ap);
char			*ft_strnew(size_t size);
void			ft_strdel(char **as);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s);
char			*ft_itoa(int nbr);
char			**ft_strsplit(char const *s, char c);
void			ft_putchar_fd(char c, int fd);
void			ft_putchair(char c);
void			ft_putstr(char *str);
void			ft_putstr_fd(char *str, int fd);
void			ft_putnbr(int nb);
void			ft_putnbr_fd(int nb, int fd);
void			ft_putendl(char const *str);
void			ft_putendl_fd(char const *str, int fd);

#endif
