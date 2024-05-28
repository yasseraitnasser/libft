/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:25:33 by yait-nas          #+#    #+#             */
/*   Updated: 2023/11/26 13:58:28 by yait-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*char_b;

	i = 0;
	char_b = (unsigned char *)b;
	while (i < len)
	{
		char_b[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	long	x;
	unsigned char *c = (unsigned char *)&x;
	memset(c, 0, 4);
	memset(c, 232, 1);
	memset(c + 1, 7, 1);
	printf("%ld", x);
}*/
