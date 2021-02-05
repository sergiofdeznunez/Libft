/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 13:42:48 by snunez            #+#    #+#             */
/*   Updated: 2021/01/24 13:50:40 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*aux;

	aux = (char *)s;
	i = 0;
	while (*(aux + i))
		i++;
	if (c == '\0')
		return (aux + i);
	i--;
	while (*(aux + i))
	{
		if (*(aux + i) == c)
			return (aux + i);
		i--;
	}
	return (NULL);
}
