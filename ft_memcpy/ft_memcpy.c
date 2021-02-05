/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 13:21:35 by snunez            #+#    #+#             */
/*   Updated: 2021/01/24 17:21:56 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*aux;
	char			*aux2;

	aux = (char *)src;
	aux2 = (char *)dest;
	i = 0;
	while (i < n)
	{
		(*(aux2 + i)) = (*(aux + i));
		i++;
	}
	return (dest);
}
