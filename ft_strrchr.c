/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:13:35 by ade-temm          #+#    #+#             */
/*   Updated: 2019/10/15 14:29:39 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;

	i = 0;
	j = -1;
	while (s[i])
	{
		if (s[i] == (char)c)
			j = i;
		i++;
	}
	if (c == '\0')
		return ((char*)&s[i]);
	return (j > -1 ? (char*)&s[j] : NULL);
}
