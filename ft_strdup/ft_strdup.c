/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 09:15:13 by snunez            #+#    #+#             */
/*   Updated: 2021/01/27 09:50:11 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	char			*aux;
	unsigned int	i;

	aux = (char *)s;
	i = 0;
	while (*(aux + i))
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	char			*aux;
	char			*cad;
	unsigned int	i;

	aux = (char *)s;
	i = 0;
	if (!(cad = (char *)malloc((ft_strlen(aux) + 1) * sizeof(char))))
		return (NULL);
	while (*(aux + i))
	{
		*(cad + i) = *(aux + i);
		i++;
	}
	*(cad + i) = '\0';
	return (cad);
}
