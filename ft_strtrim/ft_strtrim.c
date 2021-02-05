/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 13:15:28 by snunez            #+#    #+#             */
/*   Updated: 2021/01/30 13:58:58 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (*(s + i))
		i++;
	return (i);
}

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

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int		size;
	char				*new;

	if (!s1 || !set)
		return (NULL);
	while (*(s1) && ft_strchr(set, *s1))
		s1++;
	size = ft_strlen(s1);
	while (ft_strchr(set, s1[size]))
		size--;
	new = ft_substr(s1, 0, size + 1);
	return (new);
}
