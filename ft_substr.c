/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 10:55:33 by snunez            #+#    #+#             */
/*   Updated: 2021/02/13 20:48:37 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned		j;
	char			*aux;
	char			*cad;

	aux = (char *)s;
	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (!(cad = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	if (start > ft_strlen(s))
	{
		*(cad) = '\0';
		return (cad);
	}
	while (i < len)
	{
		*(cad + j) = *(aux + start + i);
		i++;
		j++;
	}
	*(cad + j) = '\0';
	return (cad);
}
