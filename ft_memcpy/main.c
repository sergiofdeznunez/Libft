/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 13:21:47 by snunez            #+#    #+#             */
/*   Updated: 2021/01/24 15:12:13 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "ft_memcpy.c"
#include <stdio.h>

int		main()
{
	char cad[] = "hola ratilla";
	char dest[20];

	ft_memcpy(dest,cad,4);
	puts(dest);
	memcpy(dest,cad,4);
	puts(dest);
}
