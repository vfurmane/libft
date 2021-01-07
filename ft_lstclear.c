/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 10:59:12 by vfurmane          #+#    #+#             */
/*   Updated: 2021/01/07 11:06:33 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	**dup_lst;
	t_list	**initial_lst;

	dup_lst = lst;
	initial_lst = lst;
	while (*dup_lst != NULL)
	{
		(*del)(*dup_lst);
		dup_lst = &(*lst)->next;
		free(*lst);
	}
	*initial_lst = NULL;
}
