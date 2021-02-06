/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 10:55:33 by snunez            #+#    #+#             */
/*   Updated: 2021/02/06 14:05:00 by snunez           ###   ########.fr       */
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
	i = start;
	j = 0;
	if (!(cad = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (i < len)
	{
		*(cad + j) = *(aux + i);
		i++;
		j++;
	}
	*(cad + j) = '\0';
	return (cad);
}
