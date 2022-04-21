/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   catch_verror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <snunez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:46:20 by snunez            #+#    #+#             */
/*   Updated: 2022/04/21 13:07:09 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	catch_verror(int error)
{
	if (error == -1)
	{
		perror("Error.");
		exit(EXIT_FAILURE);
	}
}
