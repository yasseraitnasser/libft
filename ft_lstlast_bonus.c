/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:47:08 by yait-nas          #+#    #+#             */
/*   Updated: 2023/11/27 20:02:00 by yait-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next != NULL)
	{
		lst = lst -> next;
	}
	return (lst);
}
/*
#include<stdio.h>
int main()
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;


	char *s1 = "yasser";
	char *s2 = "ait";
	char *s3 = "nasser";


	node1 = ft_lstnew(s1);
	node2 = ft_lstnew(s2);
	node3 = ft_lstnew(s3);

	node1 -> next = node2;
	node2 -> next = node3;
	t_list *ptr = ft_lstlast(node1);
	printf("%s",ptr -> content);
}*/
