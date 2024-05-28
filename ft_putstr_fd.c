/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:25:36 by yait-nas          #+#    #+#             */
/*   Updated: 2023/11/27 09:59:25 by yait-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s || fd < 0)
		return ;
	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*
#include<stdio.h>
#include <fcntl.h>
int main()
{
	int i;
	i = open("yasser", O_CREAT | O_RDWR, 0777);
	ft_putstr_fd("yasser", i);
	close(i);
}*/
