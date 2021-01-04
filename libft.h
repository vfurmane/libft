/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 11:37:22 by vfurmane          #+#    #+#             */
/*   Updated: 2021/01/04 14:47:58 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>

void	*ft_bzero(void *str, size_t len);
void	*ft_memccpy(void *dest, void *src, int chr, size_t len);
void	*ft_memcpy(void *dest, void *src, size_t len);
void	*ft_memmove(void *dest, void *src, size_t len);
void	*ft_memset(void *str, int chr, size_t len);

#endif
