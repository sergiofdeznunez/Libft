/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 15:35:06 by snunez            #+#    #+#             */
/*   Updated: 2021/02/13 17:57:20 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char			*aux;
	char			*aux2;
	unsigned int	i;

	i = 0;
	aux = (char *)src;
	aux2 = (char *)dest;
	while (i < n)
	{
		*(aux2 + i) = *(aux + i);
		if (*(aux + i) == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
