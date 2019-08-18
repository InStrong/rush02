/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasajj <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 17:09:01 by sasajj            #+#    #+#             */
/*   Updated: 2019/08/18 17:09:02 by sasajj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"
int g_width = 0;
int g_height = 0;

t_rush	*create_elem(char data)
{
	t_rush	*new_el;

	new_el = (t_rush*)malloc(sizeof(t_rush));
	new_el->next = NULL;
	new_el->character = data;
	return (new_el);
}

void	print_list(t_rush *begin_list)
{
	while (begin_list->next)
	{
		write(1, &begin_list->character, 1);
		begin_list = begin_list->next;
	}
}

void	push_back(t_rush **begin_list, char data)
{
	t_rush	*end;

	if (*begin_list == NULL)
		*begin_list = create_elem(data);
	else
	{
		end = *begin_list;
		while (end->next != NULL)
			end = end->next;
		end->next = create_elem(data);
	}
}

int		list_compare(t_rush *input)
{
	printf("\n%c", all_rushes->character);
	while (input->next)
	{
		printf("\n%c<->%c\n", all_rushes->character, input->character);
		if (all_rushes->character != input->character)
			return (FALSE);
		all_rushes = all_rushes->next;
		input = input->next;
	}
	
	return (TRUE);
}

void	calc_size(t_rush *begin_list)
{
	while (begin_list)
	{
		while (begin_list->character != '\n' && g_height == 0)
		{
			g_width++;
			begin_list = begin_list->next;
		}
		if (begin_list->character == '\n')
		{
			g_height++;
		}
		begin_list = begin_list->next;
	}
}