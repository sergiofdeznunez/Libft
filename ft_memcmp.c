/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 16:22:01 by snunez            #+#    #+#             */
/*   Updated: 2021/02/06 13:45:30 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int			i;
	unsigned char			*aux;
	unsigned char			*aux2;

	aux = (unsigned char *)s1;
	aux2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (*(aux + i) != *(aux2 + i))
			return (*(aux + i) - *(aux2 + i));
		i++;
	}
	return (0);
}
