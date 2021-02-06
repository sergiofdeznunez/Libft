/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 13:53:49 by snunez            #+#    #+#             */
/*   Updated: 2021/02/06 13:44:50 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*aux;

	i = 0;
	c = (unsigned char)c;
	aux = (unsigned char *)s;
	while (i < n)
	{
		if (*(aux + i) == c)
			return (aux + i);
		i++;
	}
	return (NULL);
}
