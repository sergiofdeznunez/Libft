/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 10:55:33 by snunez            #+#    #+#             */
/*   Updated: 2021/03/16 18:19:04 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*cad;

	i = 0;
	if (!s)
		return (NULL);
	if (len < ft_strlen(s + start))
		cad = (char *)malloc((len + 1) * sizeof(char));
	else
		cad = (char *)malloc((ft_strlen(s + start) + 1) * sizeof(char));
	if (!cad)
		return (NULL);
	if (start > ft_strlen(s))
	{
		*(cad) = '\0';
		return (cad);
	}
	while (i < len)
	{
		*(cad + i) = *(s + start + i);
		i++;
	}
	*(cad + i) = '\0';
	return (cad);
}
