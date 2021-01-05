/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 11:37:22 by vfurmane          #+#    #+#             */
/*   Updated: 2021/01/05 18:15:09 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>

int		ft_atoi(const char *str);
void	*ft_bzero(void *str, size_t len);
void	*ft_calloc(size_t len, size_t size);
int		ft_isalnum(int chr);
int		ft_isalpha(int chr);
int		ft_isascii(int chr);
int		ft_isdigit(int chr);
int		ft_isprint(int chr);
void	*ft_memccpy(void *dest, const void *src, int chr, size_t len);
void	*ft_memchr(const void *str, int chr, size_t len);
int		ft_memcmp(const void *str1, const void *str2, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memset(void *str, int chr, size_t len);
char	*ft_strchr(char *str, int chr);
char	*ft_strdup(const char *str);
size_t	ft_strlcat(char *dest, const char *src, size_t dest_size);
size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size);
int		ft_strncmp(const char *str1, const char *str2, size_t len);
char	*ft_strnstr(const char *str, const char *find, size_t len);
char	*ft_strrchr(char *str, int chr);
int		ft_strlen(const char *str);
int		ft_tolower(int chr);
int		ft_toupper(int chr);

#endif
