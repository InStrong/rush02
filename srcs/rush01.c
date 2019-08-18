/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasajj <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 17:08:41 by sasajj            #+#    #+#             */
/*   Updated: 2019/08/18 17:08:42 by sasajj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

t_rush	*create_rush01(t_rush *begin_list, int x, int y)
{
	if (x > 0 && y > 0)
	{
		push_line(R1_FL, R1_MID, R1_FR, begin_list);
		if (y >= 3)
		{
			while (y > 2)
			{
				push_line(R1_MID, ' ', R1_MID, begin_list);
				y--;
			}
		}
		if (y > 1)
		{
			push_line(R1_LL, R1_MID, R1_LR, begin_list);
		}
	}
	return (begin_list);
}
