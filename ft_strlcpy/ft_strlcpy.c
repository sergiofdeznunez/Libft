/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 17:10:25 by snunez            #+#    #+#             */
/*   Updated: 2021/02/06 13:46:59 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	char			*aux;

	i = 0;
	aux = (char *)src;
	while (i <= size - 1)
	{
		*(dst + i) = *(aux + i);
		i++;
	}
	*(dst + i) = '\0';
	return (i);
}
