/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 17:08:10 by snunez            #+#    #+#             */
/*   Updated: 2021/02/09 13:16:23 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main()
{
	char *cad = "holas";
	char cad2[20];
	char cad3[20];

	printf("%zu\n", ft_strlcpy(cad2,cad,7));
	printf("%s\n", cad2);
	printf("%zu\n", strlcpy(cad3,cad,7));
	printf("%s\n", cad3);
}
