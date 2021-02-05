/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 12:59:42 by snunez            #+#    #+#             */
/*   Updated: 2021/01/26 13:09:56 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	int				*nums;
	unsigned int	i;
	
	i = 0;
	if (nmemb == 0)
		return (NULL);
	if (!(nums = (int *)malloc(nmemb * size)))
		return (NULL);
	while (i < nmemb)
	{
		*(nums + i) = 0;
		i++;
	}
	return (nums);
}
