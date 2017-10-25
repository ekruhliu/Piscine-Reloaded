/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 15:51:21 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/10/25 15:51:22 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_H
# define HEAD_H

# include <unistd.h>
# include <fcntl.h>

# define BUF_SIZE 10000
# define TOO_FEW "File name missing.\n"
# define TOO_MANY "Too many arguments.\n"
# define NOT_OPEN "File could not open.\n"

char	*ft_read(char *name);
void	ft_putstr(char *str);
void	ft_putchar(char c);

#endif
