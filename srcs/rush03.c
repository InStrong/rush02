/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasajj <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 17:08:51 by sasajj            #+#    #+#             */
/*   Updated: 2019/08/18 17:08:52 by sasajj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

t_rush	*create_rush03(t_rush *begin_list, int x, int y)
{
	if (x > 0 && y > 0)
	{
		push_line(R3_FL, R3_MID, R3_FR, begin_list);
		if (y >= 3)
		{
			while (y > 2)
			{
				push_line(R3_MID, ' ', R3_MID, begin_list);
				y--;
			}
		}
		if (y > 1)
		{
			push_line(R3_LL, R3_MID, R3_LR, begin_list);
		}
	}
	return (begin_list);
}
