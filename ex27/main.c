/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 16:11:32 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/10/25 16:11:33 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int		main(int argc, char **argv)
{
	char *str;

	if (argc < 2)
		ft_putstr(TOO_FEW);
	else if (argc > 2)
		ft_putstr(TOO_MANY);
	else
	{
		str = ft_read(argv[1]);
		ft_putstr(str);
	}
	return (0);
}
