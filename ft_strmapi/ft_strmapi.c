/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 16:14:35 by snunez            #+#    #+#             */
/*   Updated: 2021/02/04 11:57:56 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(char const *str)
{
	unsigned int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*new;

	len = ft_strlen(s);
	if (!(new = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (*(s + i))
	{
		*(new + i) = (*f)(i, *(s + i));
		i++;
	}
	*(new + i) = '\0';
	return (new);
}
