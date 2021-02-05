/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 16:03:43 by snunez            #+#    #+#             */
/*   Updated: 2021/02/01 15:42:07 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_split.c"

int		main()
{
	char			**cad = ft_split(",,eres una rata, y de las gordas ,,,", ',');
	unsigned int	i;
	
	i = 0;
	while (*(cad + i))
	{
		printf("%s\n", *(cad + i));
		i++;
	}
	i = 0;
	while (*(cad + i))
	{
		free(*(cad + i));
		i++;
	}
	free(cad);
}
