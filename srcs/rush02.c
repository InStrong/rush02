/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasajj <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 17:08:46 by sasajj            #+#    #+#             */
/*   Updated: 2019/08/18 17:08:47 by sasajj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

t_rush	*create_rush02(t_rush *begin_list, int x, int y)
{
	if (x > 0 && y > 0)
	{
		push_line(R2_FL, R2_MID, R2_FR, begin_list);
		if (y >= 3)
		{
			while (y > 2)
			{
				push_line(R2_MID, ' ', R2_MID, begin_list);
				y--;
			}
		}
		if (y > 1)
		{
			push_line(R2_LL, R2_MID, R2_LR, begin_list);
		}
	}
	return (begin_list);
}
