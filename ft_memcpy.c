/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:48:13 by ade-temm          #+#    #+#             */
/*   Updated: 2019/10/12 14:15:45 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && i < sizeof((unsigned char*)dst))
	{
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
		i++;
	}
	return (dst);
}
