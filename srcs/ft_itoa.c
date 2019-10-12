/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:38:53 by ade-temm          #+#    #+#             */
/*   Updated: 2019/10/12 13:56:25 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_size_int(int n)
{
	int		result;

	result = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		result++;
		n *= -1;
	}
	while (n != 0)
	{
		result++;
		n /= 10;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	char			*result;
	int				i;
	unsigned int	j;

	i = ft_size_int(n);
	result = malloc(sizeof(char) * i + 1);
	result[i] = '\0';
	j = n;
	if (n == 0)
		result[0] = '0';
	if (n < 0)
	{
		result[0] = '-';
		j = -n;
	}
	while (j > 0)
	{
		result[i - 1] = (j % 10) + 48;
		j /= 10;
		i--;
	}
	return (result);
}
