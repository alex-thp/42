/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:05:09 by ade-temm          #+#    #+#             */
/*   Updated: 2019/10/12 14:14:43 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c)
{
	if (((unsigned char)c >= 'A' && (unsigned char)c <= 'Z') ||
	((unsigned char)c >= 'a' && (unsigned char)c <= 'z'))
		return (1);
	return (0);
}
