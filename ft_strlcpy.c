/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 17:10:25 by snunez            #+#    #+#             */
/*   Updated: 2021/02/09 13:25:30 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int		i;

	i = 0;
	if (!dst || !src)
		return (0);
	while ((i < (int)size - 1) && *(src + i))
	{
		*(dst + i) = *(src + i);
		i++;
	}
	if (size > 0)
		*(dst + i) = '\0';
	return (ft_strlen(src));
}
