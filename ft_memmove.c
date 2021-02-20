/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 11:52:06 by snunez            #+#    #+#             */
/*   Updated: 2021/02/11 17:55:21 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*aux;
	char			*aux2;
	char			aux3[n];

	i = 0;
	aux = (char *)src;
	aux2 = (char *)dest;
	while (i < n)
	{
		*(aux3 + i) = *(aux + i);
		i++;
	}
	i = 0;
	while (i < n)
	{
		*(aux2 + i) = *(aux3 + i);
		i++;
	}
	return (dest);
}
