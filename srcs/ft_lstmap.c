/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 18:51:56 by ade-temm          #+#    #+#             */
/*   Updated: 2019/10/12 13:56:43 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list	*new_list;

	if (!(new_list = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!(lst))
		return (NULL);
	new_list->next = ft_lstmap(lst->next, f);
	new_list->content = (*f)(lst->content);
	return (new_list);
}
