/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 14:50:13 by snunez            #+#    #+#             */
/*   Updated: 2021/01/22 12:48:10 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "ft_memset.c"

int 	main()
{
	char cad[10] = "hooola";
	printf("%s\n",ft_memset(cad,'a',3));
}
