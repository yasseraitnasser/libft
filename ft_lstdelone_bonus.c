/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:17:18 by yait-nas          #+#    #+#             */
/*   Updated: 2023/11/28 11:33:08 by yait-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst -> content);
	free(lst);
}
/*
void del(void *ptr)
{
	free(ptr);
}
#include<stdio.h>
int main()
{
	t_list *node;
	char *s = "ahbvaa";
	char *s_s;
	s_s = ft_strdup(s);
	node = ft_lstnew(s_s);
	printf("before deleting : \n");
	printf("%s\n", node -> content);
	printf("after deleting : \n");
	ft_lstdelone(node, del);
	printf("%s", node -> content);
}*/
