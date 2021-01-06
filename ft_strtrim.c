/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 11:50:07 by vfurmane          #+#    #+#             */
/*   Updated: 2021/01/06 12:19:46 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *str, const char *set)
{
	int		len;
	int		set_len;
	char	*new_str;

	len = ft_strlen(str);
	set_len = ft_strlen(set);
	if (ft_strnstr(str, set, set_len) == str)
		len -= set_len;
	if (ft_strnstr(str + 1, set, ft_strlen(str) - 1) ==
			str + ft_strlen(str) - set_len)
		len -= set_len;
	if (!(new_str = malloc(len * sizeof(*new_str))))
		return (NULL);
	printf("%d\n%d\n", len, set_len);
	if (ft_strnstr(str, set, set_len) == str)
		ft_strlcpy(new_str, str + set_len, len + 1);
	else
		ft_strlcpy(new_str, str, len + 1);
	return (new_str);
}
