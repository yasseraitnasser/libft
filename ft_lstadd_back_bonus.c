/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-nas <yait-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:08:28 by yait-nas          #+#    #+#             */
/*   Updated: 2023/11/27 20:15:25 by yait-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		new -> next = NULL;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp -> next = new;
}
/*
#include<stdio.h>
int main()
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;

	char *s1 = "yasser";
	char *s2 = "ait";
	char *s3 = "nasser";
	char *s4 = "2024";

	node1 = ft_lstnew(s1);
	node2 = ft_lstnew(s2);
	node3 = ft_lstnew(s3);
	node4 = ft_lstnew(s4);

	node1 -> next = node2;
	node2 -> next = node3;

	ft_lstadd_back(&node1, node4);
	t_list	*ptr;
	ptr = ft_lstlast(node1);
	printf("%s", (char *)ptr -> content);
}
*/
