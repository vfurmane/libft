/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:12:41 by vfurmane          #+#    #+#             */
/*   Updated: 2021/01/06 14:35:29 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(int nbr)
{
	int	i;

	if (nbr == 0)
		return (1);
	i = 0;
	i += nbr < 0;
	while (nbr)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int nbr)
{
	int		i;
	int		len;
	char	*str;

	len = ft_count_digits(nbr);
	if (!(str = malloc((len + 1) * sizeof(*str))))
		return (NULL);
	if (nbr == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (nbr < 0)
		nbr *= -1;
	str[0] = '-';
	i = len;
	while (nbr)
	{
		i--;
		str[i] = nbr % 10 + '0';
		nbr /= 10;
	}
	str[len] = '\0';
	return (str);
}
