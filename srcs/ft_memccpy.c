/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 11:45:06 by ade-temm          #+#    #+#             */
/*   Updated: 2019/10/12 13:56:54 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && *(unsigned char *)src != c)
	{
		*(unsigned char *)dst = *(unsigned char *)src;
		dst++;
		src++;
		i++;
	}
	if (i == n)
		return (NULL);
	return (++dst);
}
