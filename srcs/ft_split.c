/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:46:00 by ade-temm          #+#    #+#             */
/*   Updated: 2019/10/12 13:57:35 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_isset(char c, char set)
{
	if (c == set)
		return (1);
	return (0);
}

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
		if (str[i] == c && str[i + 1] != c && str[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}

char	*ft_copy_word(char const *s, char c, int k)
{
	char	*result;
	int		i;

	i = 0;
	while (s[k + i] != c)
		i++;
	result = malloc(sizeof(char) * i);
	i = 0;
	while (s[k + i] != c)
	{
		result[i] = s[k + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**strs;

	i = ft_count_word(s, c);
	j = 0;
	k = 0;
	strs = malloc(sizeof(char*) * i + 1);
	strs[i] = 0;
	while (j < i)
	{
		while (ft_isset(s[k], c) == 1)
			k++;
		strs[j] = ft_copy_word(s, c, k);
		while (ft_isset(s[k], c) == 0)
			k++;
		j++;
	}
	return (strs);
}
