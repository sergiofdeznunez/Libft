/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 12:59:42 by snunez            #+#    #+#             */
/*   Updated: 2021/02/12 17:35:20 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*nums;
	size_t			i;

	i = 0;
	if (!(nums = malloc(nmemb * size)))
		return (NULL);
	ft_bzero(nums, nmemb * size);
	return (nums);
}
