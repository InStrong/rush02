/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasajj <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 17:08:35 by sasajj            #+#    #+#             */
/*   Updated: 2019/08/18 17:08:36 by sasajj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

void	push_line(char first_char,
	char middle_char, char last_char, t_rush *begin_list)
{
	int w;

	w = g_width;
	push_back(&begin_list, first_char);
	if (w >= 3)
	{
		while (w > 2)
		{
			push_back(&begin_list, middle_char);
			w--;
		}
	}
	if (w > 1)
		push_back(&begin_list, last_char);
	push_back(&begin_list, '\n');
}

t_rush	*create_rush00(t_rush *begin_list, int x, int y)
{
	if (x > 0 && y > 0)
	{
		push_line(R0_FL, R0_TOP_MID, R0_FR, begin_list);
		if (y >= 3)
		{
			while (y > 2)
			{
				push_line(R0_MID_MID, ' ', R0_MID_MID, begin_list);
				y--;
			}
		}
		if (y > 1)
		{
			push_line(R0_LL, R0_TOP_MID, R0_LR, begin_list);
		}
	}
	return (begin_list);
}
