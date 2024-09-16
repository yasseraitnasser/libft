/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:25:41 by yait-nas          #+#    #+#             */
/*   Updated: 2023/11/15 20:46:57 by yait-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*char_src;
	unsigned char	*char_dst;

	i = 0;
	if (!dst && !src)
		return (NULL);
	char_src = (unsigned char *)src;
	char_dst = (unsigned char *)dst;
	if (char_dst > char_src)
	{
		while (len--)
			char_dst[len] = char_src[len];
	}
	else
	{
		while (i < len)
		{
			char_dst[i] = char_src[i];
			i++;
		}
	}
	return (dst);
}
