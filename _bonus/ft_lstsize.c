/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 10:43:56 by snunez            #+#    #+#             */
/*   Updated: 2021/02/19 13:23:20 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*aux;

	aux = lst;
	if (!lst)
		return (0);
	i = 0;
	while (aux)
	{
		aux = aux->next;
		i++;
	}
	return (i);
}
