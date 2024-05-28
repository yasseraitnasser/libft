/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:37:27 by yait-nas          #+#    #+#             */
/*   Updated: 2023/11/27 14:39:09 by yait-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!haystack && !needle[0])
		return (NULL);
	if (needle[j] == '\0')
		return ((char *)(haystack));
	while (haystack[i])
	{
		while (haystack[i + j] && haystack[i + j] == needle[j] && i + j < len)
			j++;
		if (needle[j] == '\0')
			return ((char *)(haystack + i));
		i++;
		j = 0;
	}
	return (NULL);
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
	printf("%s\n",ft_strnstr("", "", -1));
	//printf("%s",strnstr("", "", -1));
}*/
