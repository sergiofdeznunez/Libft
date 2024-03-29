/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <snunez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 11:52:06 by snunez            #+#    #+#             */
/*   Updated: 2022/02/07 11:55:35 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*aux;
	char			*aux2;
	const int		SIZE = n;
	char			aux3[SIZE];

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
