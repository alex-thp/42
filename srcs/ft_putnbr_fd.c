/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 17:38:15 by ade-temm          #+#    #+#             */
/*   Updated: 2019/10/12 13:57:23 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	i;

	i = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		i = -n;
	}
	if (i < 10)
		ft_putchar_fd((i + 48), fd);
	if (i > 10)
	{
		ft_putnbr_fd((i / 10), fd);
		ft_putchar_fd((i % 10) + 48, fd);
	}
}
