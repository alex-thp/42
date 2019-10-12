/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 18:35:48 by ade-temm          #+#    #+#             */
/*   Updated: 2019/10/12 13:56:34 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if ((*lst)->next != NULL)
		ft_lstclear(&(*lst)->next, del);
	(*lst)->next = NULL;
	ft_lstdelone(*lst, del);
}
