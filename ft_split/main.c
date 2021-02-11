/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 16:03:43 by snunez            #+#    #+#             */
/*   Updated: 2021/02/11 12:11:44 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main()
{
	char			**cad = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
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
