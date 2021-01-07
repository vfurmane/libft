/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 11:07:33 by vfurmane          #+#    #+#             */
/*   Updated: 2021/01/07 11:11:20 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void *(*f)(void*))
{
	while (lst != NULL)
	{
		lst->content = (t_list*)(*f)(lst);
		lst = lst->next;
	}
}
