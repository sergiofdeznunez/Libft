/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 13:15:28 by snunez            #+#    #+#             */
/*   Updated: 2021/02/06 14:07:14 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
