/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:13:32 by yait-nas          #+#    #+#             */
/*   Updated: 2023/11/27 09:54:46 by yait-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}
/*
#include<fcntl.h>
int main()
{
	int	i;
	i = open("yasser", O_CREAT | O_RDWR, 0777);
	ft_putchar_fd('y', i);
	close (i);
}*/
