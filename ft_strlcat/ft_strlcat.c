/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 18:18:47 by snunez            #+#    #+#             */
/*   Updated: 2021/01/27 13:47:46 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (*(s + i))
		i++;
	return (i);
}

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
