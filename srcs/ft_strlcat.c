/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:05:13 by ade-temm          #+#    #+#             */
/*   Updated: 2019/10/12 13:57:47 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	i = ft_strlen(dst);
	j = ft_strlen(src);
	if (i >= dstsize)
		return (j + dstsize);
	if (j < dstsize - i)
		ft_memcpy(&dst[i], src, j + 1);
	else
	{
		ft_memcpy(&dst[i], src, dstsize - i - 1);
		dst[dstsize - 1] = '\0';
	}
	return (i + j);
}
