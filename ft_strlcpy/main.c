/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 17:08:10 by snunez            #+#    #+#             */
/*   Updated: 2021/01/23 18:17:35 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlcpy.c"
#include <stdio.h>
#include <string.h>

int	main()
{
	char cad[] = "holas";
	char cad2[10];

	printf("%zu\n", ft_strlcpy(cad2,cad,5));
	printf("%zu\n", strlcpy(cad2,cad,5));
}
