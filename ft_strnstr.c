/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 11:48:04 by vfurmane          #+#    #+#             */
/*   Updated: 2021/01/01 21:18:38 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	int	i;
	int	j;

	if (!find || *find == '\0')
		return ((char*)str);
	i = 0;
	j = 0;
	while (str[i] && i < (int)len)
	{
		j = 0;
		while (find[j] && str[i + j] == find[j] && i + j < (int)len)
			j++;
		if (!find[j])
			return ((char*)&str[i]);
		i++;
	}
	return (NULL);
}
