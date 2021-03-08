/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 12:59:42 by snunez            #+#    #+#             */
/*   Updated: 2021/03/08 10:14:11 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*nums;
	size_t			i;

	i = 0;
	nums = malloc(nmemb * size);
	if (nums == NULL)
		return (NULL);
	ft_bzero(nums, nmemb * size);
	return (nums);
}
