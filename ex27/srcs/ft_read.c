/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 16:32:00 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/10/25 16:32:01 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

char	*ft_read(char *name)
{
	int		fd;
	int		size;
	char	buffer[BUF_SIZE];
	char	*ret;

	fd = open(name, O_RDONLY);
	if (fd <= 0)
		return (NOT_OPEN);
	else
	{
		size = read(fd, buffer, BUF_SIZE);
		buffer[size] = '\0';
		close(fd);
		ret = buffer;
		return (ret);
	}
}
