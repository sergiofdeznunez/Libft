/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   catch_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <snunez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:43:28 by snunez            #+#    #+#             */
/*   Updated: 2022/04/21 13:07:10 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	catch_error(int error)
{
	if (error == -1)
	{
		perror("Error(c_error)");
		exit(EXIT_FAILURE);
	}
	return (error);
}
