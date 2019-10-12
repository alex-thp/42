/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:15:49 by ade-temm          #+#    #+#             */
/*   Updated: 2019/10/12 14:14:36 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <errno.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	if (count == 0 || size == 0)
	{
		errno = ENOMEM;
		return (NULL);
	}
	result = malloc(count * size);
	ft_bzero(result, (size * count));
	return (result);
}
