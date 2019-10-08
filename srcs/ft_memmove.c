/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:06:32 by ade-temm          #+#    #+#             */
/*   Updated: 2019/10/08 12:54:14 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	str[5000];
	size_t			i;

	i = 0;
	while (i < len && i < sizeof((unsigned char*)src))
	{
		str[i] = *(unsigned char*)src;
		src++;
		i++;
	}
	i = 0;
	while (i < len && i < sizeof((unsigned char*)dst))
	{
		*(unsigned char*)dst = str[i];
		dst++;
		i++;
	}
	return (dst);
}
