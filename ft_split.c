/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:46:00 by ade-temm          #+#    #+#             */
/*   Updated: 2019/10/15 17:02:15 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char	*ft_copy_word(char const *s, char c)
{
	char	*result;
	int		i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	result = ft_calloc(i + 1, sizeof(char));
	i = 0;
	while (s[i] != c && s[i])
	{
		result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**strs;

	i = ft_count_word(s, c);
	if (!(strs = malloc(sizeof(char*) * (i + 1))))
		return (0);
	strs[i] = NULL;
	i = 0;
	while (strs[i])
	{
		while (*s == c)
			s++;
		strs[i] = ft_copy_word(s, c);
		while (*s != c && *s)
			s++;
		i++;
	}
	return (strs);
}
