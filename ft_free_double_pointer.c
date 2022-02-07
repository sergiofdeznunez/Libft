/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_double_pointer.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <snunez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 10:22:36 by snunez            #+#    #+#             */
/*   Updated: 2022/02/07 13:41:57 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_double_pointer(void **pointer)
{
	int	i;

	i = 0;
	while (pointer[i])
	{
		free(pointer[i]);
		i++;
	}
	free(pointer);
}
