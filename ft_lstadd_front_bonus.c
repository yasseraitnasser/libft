/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:09:22 by yait-nas          #+#    #+#             */
/*   Updated: 2023/11/27 19:52:22 by yait-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new -> next = *lst;
		*lst = new;
	}
}
/*
#include<stdio.h>
int main()
{
	t_list	*node;
	t_list	*new;
	t_list	*ptr;

	char *s1 = " yasser";
	char *s2 = "ait nasser";

	node = ft_lstnew(" yasser");
	new = ft_lstnew("ait nasser");
	printf("before adding : \n");
	printf("%s\n", (char *)node -> content);
	printf("after adding : \n");
	ft_lstadd_front(&node, new);
	ptr = node;
	while (ptr)
	{
		printf("%s",(char *)ptr ->content);
		ptr = ptr -> next;
	}
}*/
