/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 13:53:47 by snunez            #+#    #+#             */
/*   Updated: 2021/01/23 14:21:08 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_memchr.c"

int	main()
{
	char	cad[] = "hola caracola";
	char	*aux;

	aux = memchr(cad,'r',9);
	puts(aux);
}
