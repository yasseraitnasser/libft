/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:08:33 by yait-nas          #+#    #+#             */
/*   Updated: 2023/11/25 18:52:39 by yait-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*head;
	t_list	*tmp;
	void	*ptr;

	tmp = lst;
	head = NULL;
	if (lst && f && del)
	{
		while (tmp)
		{
			ptr = f(tmp -> content);
			new_node = ft_lstnew(ptr);
			if (!new_node)
			{
				del(ptr);
				ft_lstclear(&head, del);
				return (NULL);
			}
			ft_lstadd_back(&head, new_node);
			tmp = tmp -> next;
		}
	}
	return (head);
}
