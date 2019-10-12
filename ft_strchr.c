/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 11:51:32 by ade-temm          #+#    #+#             */
/*   Updated: 2019/10/12 14:16:09 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	short int	i;

	i = 0;
	while ((unsigned char)s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char*)&s[i]);
		i++;
	}
	return ((unsigned char)c == '\0' ? (char*)&s[i] : NULL);
}
