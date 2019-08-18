/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_hits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasajj <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 20:02:52 by sasajj            #+#    #+#             */
/*   Updated: 2019/08/18 20:02:52 by sasajj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

void	creation()
{
	all_rushes = NULL;
	all_rushes = (t_rush*)malloc(sizeof(t_rush) * 5);
	all_rushes[0] = *create_rush00(all_rushes, g_width,g_height);
	all_rushes[1] = *create_rush01(all_rushes, g_width, g_height);
	all_rushes[2] = *create_rush02(all_rushes, g_width, g_height);
	all_rushes[3] = *create_rush03(all_rushes, g_width, g_height);
	all_rushes[4] = *create_rush04(all_rushes, g_width, g_height);

}

int		*result(t_rush *input, int *answer)
{
	int i;

	i = 0;
	while (i < 5)
		answer[i++] = 0;
		
	i = 0;

	input+= 1 - 1;
	all_rushes += 1 - 1;

	return (answer);
}
