/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:57:44 by ade-temm          #+#    #+#             */
/*   Updated: 2019/10/10 13:43:40 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"
#include <stdio.h>

int		ft_isset(char c, char const *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		i;
	int		j;

	j = 0;
	i = ft_strlen(s1);
	if (!(result = malloc(sizeof(char) * i)))
		return (NULL);
	i = 0;
	while (ft_isset(s1[i], set) != 0 && s1[i])
		i++;
	while (s1[i])
	{
		result[j] = s1[i];
		i++;
		j++;
	}
	result[j] = '\0';
	while (ft_isset(result[j - 1], set) == 1 && j > -1)
	{
		result[j - 1] = '\0';
		j--;
	}
	return (result);
}
