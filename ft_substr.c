/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:57:23 by yait-nas          #+#    #+#             */
/*   Updated: 2023/11/17 19:38:48 by yait-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stddef.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substring;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		substring = malloc(1);
		if (!substring)
			return (substring);
		substring[0] = '\0';
		return (substring);
	}
	i = 0;
	while (s[start + i] && i < len && s[i])
		i++;
	substring = malloc((i + 1) * sizeof(char));
	if (!substring)
		return (substring);
	i = 0;
	while (i < len && s[start] && start < ft_strlen(s))
		substring[i++] = s[start++];
	substring[i] = '\0';
	return (substring);
}
/*
#include<stdio.h>
int main()
{
	printf("%s",ft_substr("",1,1));
}*/
