/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:58:39 by vfurmane          #+#    #+#             */
/*   Updated: 2021/01/06 15:08:46 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nbr, int fd)
{
	unsigned int	nb;

	if (nbr == 0)
		ft_putchar_fd('0', fd);
	if (nbr < 0)
	{
		nb = nbr * -1;
		ft_putchar_fd('-', fd);
	}
	else
		nb = nbr;
	while (nb)
	{
		ft_putchar_fd(nb % 10 + '0', fd);
		nb /= 10;
	}
}
