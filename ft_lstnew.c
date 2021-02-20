/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 18:54:26 by snunez            #+#    #+#             */
/*   Updated: 2021/02/19 13:46:20 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list	*lst;

	if (!(lst = (t_list *)malloc(1 * sizeof(t_list))))
		return (NULL);
	lst->content = content;
	lst->next = (NULL);
	return (lst);
}
