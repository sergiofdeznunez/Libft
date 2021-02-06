/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 18:18:47 by snunez            #+#    #+#             */
/*   Updated: 2021/02/06 13:50:24 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	char			*aux;
	size_t			rsize;

	aux = (char *)src;
	rsize = ft_strlen(dst) + ft_strlen(src);
	i = 0;
	j = 0;
	while (*(dst + i))
		i++;
	while (i <= size - 1)
	{
		*(dst + i) = *(aux + j);
		i++;
		j++;
	}
	*(dst + i) = '\0';
	return (rsize);
}
