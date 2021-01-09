/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 11:12:00 by vfurmane          #+#    #+#             */
/*   Updated: 2021/01/09 19:53:01 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*new_elm;
	t_list	*new_lst;

	while (lst != NULL)
	{
		new_elm = ft_lstnew(lst->content);
		(*f)(new_elm->content);
		ft_lstadd_back(&new_lst, new_elm);
		if (new_lst == NULL)
		{
			ft_lstdelone(new_lst, del);
			return (new_lst);
		}
		lst = lst->next;
	}
	return (new_lst);
}
