/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <snunez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 13:42:48 by snunez            #+#    #+#             */
/*   Updated: 2022/04/21 12:48:46 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*aux;

	aux = (char *)s;
	i = 0;
	while (*(aux + i))
		i++;
	if (c == '\0')
		return (aux + i);
	while (i >= 0)
	{
		if (*(aux + i) == c)
			return (aux + i);
		if (i == 0 && *(aux + i) != c)
			return (NULL);
		i--;
	}
	return (NULL);
}
