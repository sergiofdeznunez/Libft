/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 13:10:33 by snunez            #+#    #+#             */
/*   Updated: 2021/02/06 13:50:34 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			*aux;

	i = 0;
	aux = (char *)s;
	while (*(aux + i))
	{
		if (*(aux + i) == c)
			return (aux + i);
		i++;
	}
	if (c == '\0')
		return (aux + i);
	return (NULL);
}
