/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 16:14:35 by snunez            #+#    #+#             */
/*   Updated: 2021/02/06 14:09:35 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
