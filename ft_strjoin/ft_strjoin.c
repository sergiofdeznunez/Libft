/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 12:21:50 by snunez            #+#    #+#             */
/*   Updated: 2021/02/06 14:05:39 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t			size;
	char			*new;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(new = (char *)malloc(size * sizeof(char))))
		return (NULL);
	while (*(s1 + i))
	{
		*(new + j) = *(s1 + i);
		i++;
		j++;
	}
	i = 0;
	while (*(s2 + i))
	{
		*(new + j) = *(s2 + i);
		i++;
		j++;
	}
	*(new + j) = '\0';
	return (new);
}
