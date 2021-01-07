/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 11:12:00 by vfurmane          #+#    #+#             */
/*   Updated: 2021/01/07 11:20:50 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*new_lst;
	t_list	*initial_new_lst;

	if (!(new_lst = malloc(sizeof(*new_lst))))
		return (NULL);
	initial_new_lst = new_lst;
	while (lst != NULL)
	{
		new_lst = (t_list*)(*f)(lst);
		if (new_lst == NULL)
		{
			(*del)(new_lst);
			free(new_lst);
			return (initial_new_lst);
		}
		lst = lst->next;
	}
	return (initial_new_lst);
}
