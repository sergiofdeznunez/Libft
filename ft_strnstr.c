/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 14:55:05 by snunez            #+#    #+#             */
/*   Updated: 2021/02/13 20:57:36 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i;
	size_t			j;

	i = 0;
	if (*(little) == '\0')
		return ((char *)big);
	while (i < len)
	{
		j = 0;
		while (*(big + i) != *(little + j) && *(big + i) && i < len)
			i++;
		if (*(big + i) == '\0')
			return (NULL);
		while (*(big + i) == *(little + j) && *(little + j))
		{
			if ((*(little + j + 1) == '\0') && i < len)
				return ((char *)big + i - j);
			i++;
			j++;
		}
	}
	return (NULL);
}
