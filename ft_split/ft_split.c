/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 16:03:25 by snunez            #+#    #+#             */
/*   Updated: 2021/02/06 14:08:25 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_howmany(const char *s, char c)
{
	unsigned int	i;
	unsigned int	cont;

	i = 0;
	cont = 0;
	while (*(s) == c)
		s++;
	while (*(s + i))
	{
		if (*(s + i) == c)
		{
			cont++;
			if (*(s + i + 1) == c || *(s + i + 1) == '\0')
				cont--;
		}
		i++;
	}
	return (cont);
}

char	**ft_free(char **array, size_t len_array)
{
	while (len_array >= 0)
	{
		free(*(array + len_array));
		len_array--;
	}
	free(array);
	return (NULL);
}

size_t	ft_countchars(const char *s, char c)
{
	unsigned int	i;
	unsigned int	cont;

	i = 0;
	cont = 0;
	while (*(s + i) != c && *(s + i) != '\0')
	{
		i++;
		cont++;
	}
	return (cont);
}

char	**ft_split(char const *s, char c)
{
	char			**respuesta;
	unsigned int	i;
	unsigned int	sizecad;
	char			*aux;

	aux = (char *)s;
	i = 0;
	if (!(respuesta = (char **)malloc((ft_howmany(s, c) + 2) * sizeof(char *)))
			|| (*(s) == '\0'))
		return (NULL);
	while (i <= ft_howmany(s, c))
	{
		while (*(aux) == c)
			aux++;
		sizecad = ft_countchars(aux, c);
		if (!(*(respuesta + i) = ft_substr(aux, 0, sizecad)))
			return (ft_free(respuesta, i));
		aux = aux + sizecad;
		i++;
	}
	*(respuesta + i) = 0;
	return (respuesta);
}
