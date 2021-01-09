/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 11:37:22 by vfurmane          #+#    #+#             */
/*   Updated: 2021/01/09 12:09:53 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int					ft_atoi(const char *str);
void				*ft_bzero(void *str, size_t len);
void				*ft_calloc(size_t len, size_t size);
int					ft_isalnum(int chr);
int					ft_isalpha(int chr);
int					ft_isascii(int chr);
int					ft_isdigit(int chr);
int					ft_isprint(int chr);
char				*ft_itoa(int nbr);
void				*ft_memccpy(void *dest, const void *src, int chr,
					size_t len);
void				*ft_memchr(const void *str, int chr, size_t len);
int					ft_memcmp(const void *str1, const void *str2, size_t len);
void				*ft_memcpy(void *dest, const void *src, size_t len);
void				*ft_memmove(void *dest, const void *src, size_t len);
void				*ft_memset(void *str, int chr, size_t len);
void				ft_putchar_fd(char chr, int fd);
void				ft_putendl_fd(char *str, int fd);
void				ft_putnbr_fd(int nbr, int fd);
void				ft_putstr_fd(char *str, int fd);
char				**ft_split(const char *str, char sep);
char				*ft_strchr(const char *str, int chr);
char				*ft_strdup(const char *str);
char				*ft_strjoin(const char *str1, const char *str2);
size_t				ft_strlcat(char *dest, const char *src, size_t dest_size);
size_t				ft_strlcpy(char *dest, const char *src, size_t dest_size);
char				*ft_strmapi(const char *str,
					char (*ft)(unsigned int, char));
int					ft_strncmp(const char *str1, const char *str2, size_t len);
char				*ft_strnstr(const char *str, const char *find, size_t len);
char				*ft_strrchr(char *str, int chr);
char				*ft_strtrim(const char *str, const char *set);
char				*ft_substr(const char *str, unsigned int start, size_t len);
int					ft_strlen(const char *str);
int					ft_tolower(int chr);
int					ft_toupper(int chr);

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstclear(t_list **lst, void (*del)(void*));
void				ft_lstdelone(t_list *lst, void (*del)(void*));
void				ft_lstiter(t_list *lst, void (*f)(void*));
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void*),
					void (*del)(void*));
t_list				*ft_lstnew(void *content);
int					ft_lstsize(t_list *lst);

#endif
