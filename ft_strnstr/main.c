/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 14:54:52 by snunez            #+#    #+#             */
/*   Updated: 2021/02/12 18:02:10 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main()
{
	char	*cadena;
	char	*cadena2;
	char	cad[] = "ipsum loremi";
	char	cad2[] = "lorem";

	cadena = ft_strnstr(cad, cad2, 14);
	printf("%s\n", cadena);
	cadena2 = strnstr(cad,cad2,14);
	printf("%s\n", cadena2);
}
