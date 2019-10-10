/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:46:00 by ade-temm          #+#    #+#             */
/*   Updated: 2019/10/10 14:08:06 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		ft_count_word(char const *str, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (i == 0 && str[i] != c)
			count++;
		if (i != 0 && str[i] == c)
			count++;
		i++;
	}
	return (count);
}

char	*ft_copy_word(char const *s, char c, int i)
{
	int		count;
	int		j;
	char	*result;

	count = 0;
	j = 0;
	while (count != i)
	{
		if (j != 0 && s[j] == c)
			count++;
		j++;
	}
	count = 0;
	while (s[j + count] != c)
		count++;
	result = malloc(sizeof(char) * (count + 1));
	count = 0;
	while (s[j + count] != c)
	{
		result[count] = s[j + count];
		count++;
	}
	result[count] = '\0';
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**strs;

	i = ft_count_word(s, c);
	j = 0;
	strs = malloc(sizeof(char*) * i + 1);
	strs[i] = NULL;
	while (j < i)
	{
		strs[i] = ft_copy_word(s, c, i);
		j++;
	}
	return (strs);
}
