/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iostream.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasajj <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 17:08:25 by sasajj            #+#    #+#             */
/*   Updated: 2019/08/18 17:08:26 by sasajj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = 0;
	temp = (char*)malloc(sizeof(char) * (ft_strlen(dest)
				+ ft_strlen(src) + 1));
	while (dest[j] != '\0')
	{
		temp[j] = dest[j];
		j++;
	}
	while (src[i] != '\0')
	{
		temp[j] = src[i];
		i++;
		j++;
	}
	temp[j] = '\0';
	return (temp);
}

t_rush	*input_to_list(t_rush *answer)
{
	char	*c;
	int		i;
	int		j;
	char	*str;

	c = (char*)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	str = (char*)malloc(sizeof(char));
	while ((i = read(0, c, BUFFER_SIZE)))
	{
		c[i] = '\0';
		str = ft_strcat(str, c);
	}
	j = 0;
	while (str[j])
	{
		push_back(&answer,str[j]);
		j++;
	}
	free(str);
	free(c);
	return (answer);
}
