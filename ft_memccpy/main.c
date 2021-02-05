/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 15:35:45 by snunez            #+#    #+#             */
/*   Updated: 2021/01/23 11:49:05 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "ft_memccpy.c"
#include <stdio.h>

int   main()
{
  char cad[] = "hola leti";
  char dest[15] = "adiosadios";

  puts(ft_memccpy(dest,cad,'x',6));
  puts(dest);
  puts(memccpy(dest,cad,'x',6));
  puts(dest);
}
