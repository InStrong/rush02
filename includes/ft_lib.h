/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasajj <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 17:08:01 by sasajj            #+#    #+#             */
/*   Updated: 2019/08/18 17:08:04 by sasajj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# define FALSE 0
# define TRUE 1
# define BUFFER_SIZE 4096
# define R0_FL 'o'
# define R0_FR 'o'
# define R0_LL 'o'
# define R0_LR 'o'
# define R0_TOP_MID '-'
# define R0_MID_MID '|'
# define R1_FL '/'
# define R1_FR '\\'
# define R1_LL '\\'
# define R1_LR '/'
# define R1_MID '*'
# define R2_FL 'A'
# define R2_FR 'A'
# define R2_LL 'C'
# define R2_LR 'C'
# define R2_MID 'B'
# define R3_FL 'A'
# define R3_FR 'C'
# define R3_LL 'A'
# define R3_LR 'C'
# define R3_MID 'B'
# define R4_FL 'A'
# define R4_FR 'C'
# define R4_LL 'C'
# define R4_LR 'A'
# define R4_MID 'B'
int g_width;
int g_height;

typedef struct		s_rush
{
	char			character;
	struct s_rush	*next;
}					t_rush;
t_rush	*all_rushes;
void	creation();
int		*result(t_rush *input, int *answer);
void				push_back(t_rush **begin_list, char data);
void				print_list(t_rush *begin_list);
t_rush				*create_elem(char data);
int					list_compare(t_rush *list2);
t_rush				*create_rush00(t_rush *begin_list, int x, int y);
t_rush				*create_rush01(t_rush *begin_list, int x, int y);
t_rush				*create_rush02(t_rush *begin_list, int x, int y);
t_rush				*create_rush03(t_rush *begin_list, int x, int y);
t_rush				*create_rush04(t_rush *begin_list, int x, int y);
t_rush				*input_to_list(t_rush *answer);
char				*ft_strcat(char *dest, char *src);
void				push_line(char first_char,
	char middle_char, char last_char, t_rush *begin_list);
int					ft_strlen(char *str);
void	calc_size(t_rush *begin_list);

#endif
