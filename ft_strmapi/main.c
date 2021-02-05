/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 12:43:26 by snunez            #+#    #+#             */
/*   Updated: 2021/02/04 11:58:10 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_strmapi.c"
#include "ft_toupper.c"

int		main()
{
	char	*prueba = "holaadios";
	char	*resultado;
	unsigned int i;
	
	i = 0;
	resultado = ft_strmapi(prueba,ft_toupper);
	printf("%s\n", resultado);
	free(resultado);
}
