/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasajj <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 17:08:56 by sasajj            #+#    #+#             */
/*   Updated: 2019/08/18 17:08:57 by sasajj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

t_rush	*create_rush04(t_rush *begin_list, int x, int y)
{
	if (x > 0 && y > 0)
	{
		push_line(R4_FL, R4_MID, R4_FR, begin_list);
		if (y >= 3)
		{
			while (y > 2)
			{
				push_line(R4_MID, ' ', R4_MID, begin_list);
				y--;
			}
		}
		if (y > 1)
		{
			push_line(R4_LL, R4_MID, R4_LR, begin_list);
		}
	}
	return (begin_list);
}
