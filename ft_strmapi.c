/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:39:50 by vfurmane          #+#    #+#             */
/*   Updated: 2021/06/25 23:14:43 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *str, char (*ft)(unsigned int, char))
{
	int		i;
	int		len;
	char	*new_str;

	len = ft_strlen(str);
	new_str = malloc((len + 1) * sizeof(*new_str));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		new_str[i] = (*ft)((unsigned int)i, str[i]);
		i++;
	}
	new_str[len] = '\0';
	return (new_str);
}
