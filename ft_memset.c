/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:25:33 by yait-nas          #+#    #+#             */
/*   Updated: 2024/09/16 07:19:21 by yasser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
