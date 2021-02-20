/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 16:28:36 by snunez            #+#    #+#             */
/*   Updated: 2021/02/19 13:42:53 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;
	t_list	*paux;

	if (!lst || !del)
		return ;
	aux = *lst;
	while (aux)
	{
		paux = aux->next;
		del(aux->content);
		free(aux);
		aux = paux;
	}
	*lst = (NULL);
}
