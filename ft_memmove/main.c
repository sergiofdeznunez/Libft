/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 11:52:02 by snunez            #+#    #+#             */
/*   Updated: 2021/01/23 13:49:53 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_memmove.c"

int main()
{
  char  cad[] = "hola caracola";
  char  dest[20];

  ft_memmove(dest,cad,10);
  puts(dest);
}
