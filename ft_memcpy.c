/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:39:14 by yait-nas          #+#    #+#             */
/*   Updated: 2023/11/26 13:19:19 by yait-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*char_dst;
	unsigned char	*char_src;

	if (!dst && !src)
		return (NULL);
	i = 0;
	char_dst = (unsigned char *)dst;
	char_src = (unsigned char *)src;
	while (i < n)
	{
		char_dst[i] = char_src[i];
		i++;
	}
	return (dst);
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
	//char src[] = "";
	char dst[5];
	//printf("%s\n",src);
	printf("%s",ft_memcpy(dst, NULL, 0));
	//printf("%s",memcpy(dst, NULL, 0));
}*/
