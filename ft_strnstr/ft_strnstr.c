/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 14:55:05 by snunez            #+#    #+#             */
/*   Updated: 2021/01/28 10:51:08 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (*(s + i))
		i++;
	return (i);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i;
	size_t			j;
	char			*aux;
	char			*aux2;

	aux = (char *)big;
	aux2 = (char *)little;
	i = 0;
	while (i <= len)
	{
		j = 0;
		while (*(aux + i) != *(aux2 + j))
			i++;
		while (*(aux + i) == *(aux2 + j) && i <= len)
		{
			if ((*(aux2 + j + 1) == '\0') && (j == ft_strlen(little)))
				return (aux + i - j);
			i++;
			j++;
		}
	}
	return (NULL);
}
