/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:00:58 by ade-temm          #+#    #+#             */
/*   Updated: 2019/10/12 14:15:26 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *(unsigned char*)s != (unsigned char)c)
	{
		i++;
		s++;
	}
	if (i == n)
		return (NULL);
	return ((void*)s);
}
