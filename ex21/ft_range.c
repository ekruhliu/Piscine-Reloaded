/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 13:40:51 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/10/24 13:40:52 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *x;

	i = 0;
	if (min >= max)
		return (0);
	x = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		x[i] = min;
		min++;
		i++;
	}
	return (x);
}
