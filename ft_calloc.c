/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 18:01:49 by vfurmane          #+#    #+#             */
/*   Updated: 2021/01/05 18:12:09 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t len, size_t size)
{
	void	*ptr;
	size_t	total_size;

	total_size = len * size;
	if (9223372036854775807 / size < len)
		return (NULL);
	ptr = malloc(total_size);
	ft_bzero(ptr, total_size);
	return (ptr);
}
