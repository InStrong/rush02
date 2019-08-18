/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasajj <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 17:08:30 by sasajj            #+#    #+#             */
/*   Updated: 2019/08/18 17:08:31 by sasajj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"


int	main(int argc, char **argv)
{
	g_width = 0;
	g_height = 0;
	t_rush	*input;
	// int	answer[5];
	    
	input = NULL;
	input = input_to_list(input);
// //	print_list(input);
	calc_size(input);
	// int i = 0;
	int *arr;
	arr = NULL;
	creation();
//	print_list(&all_rushes[4]);
	printf("%d", list_compare(input));
	//arr = result(creation(all_rushes), input, answer);
	// while (i < 5)
	// {	
	// 	printf("%d\n" , arr[i]);
	// 	i++;
	// }
	if (argc < 0)
		argv = 0;
	return (0);
}
