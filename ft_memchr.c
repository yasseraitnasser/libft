/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:14:14 by yait-nas          #+#    #+#             */
/*   Updated: 2023/11/17 09:51:58 by yait-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*char_s;

	i = 0;
	char_s = (unsigned char *)s;
	while (i < n)
	{
		if (char_s[i] == (unsigned char)c)
			return ((void *)(&s[i]));
		i++;
	}
	return (NULL);
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
	printf("%s\n",ft_memchr("yasser",0,10));
	//printf("%s",memchr("yasser",0,10));
}*/
