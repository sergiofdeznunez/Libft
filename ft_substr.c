/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 10:55:33 by snunez            #+#    #+#             */
/*   Updated: 2021/03/02 19:03:15 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*aux;
	char			*cad;

	aux = (char *)s;
	i = 0;
	if (!s || len < 0 || start < 0)
		return (NULL);
	if (!(cad = (char *)malloc((ft_strlen(s) + 1) * sizeof(char))))
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
	{
		*(cad) = '\0';
		return (cad);
	}
	while (i < len && *(aux + start + i))
	{
		*(cad + i) = *(aux + start + i);
		i++;
	}
	*(cad + i) = '\0';
	return (cad);
}
