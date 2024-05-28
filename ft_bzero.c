/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:02:52 by yait-nas          #+#    #+#             */
/*   Updated: 2023/11/27 14:16:51 by yait-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*char_s;

	i = 0;
	char_s = (unsigned char *)s;
	while (i < n)
	{
		char_s[i] = '\0';
		i++;
	}
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
	char *s1 = "";
	//ft_bzero(s1,5);
	//printf("%s",s1);
	bzero(s1,5);
	printf("%s",s1);
}*/
