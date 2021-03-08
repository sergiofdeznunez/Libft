/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 18:29:27 by snunez            #+#    #+#             */
/*   Updated: 2021/03/08 11:38:49 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;
	t_list	*newelem;
	t_list	*result;

	if (!lst || !(*f))
		return (NULL);
	aux = lst;
	result = 0;
	while (aux)
	{
		newelem = ft_lstnew((*f)(aux->content));
		if (newelem == NULL)
		{
			ft_lstclear(&newelem, del);
			return (NULL);
		}
		ft_lstadd_back(&result, newelem);
		aux = aux->next;
	}
	return (result);
}
