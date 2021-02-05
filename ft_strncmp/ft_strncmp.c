/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 09:12:02 by snunez            #+#    #+#             */
/*   Updated: 2021/01/25 09:26:28 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	char			*aux;
	char			*aux2;

	aux = (char *)s1;
	aux2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (*(aux + i) != *(aux2 + i))
			return (*(aux + i) - *(aux2 + i));
		i++;
	}
	return (0);
}
