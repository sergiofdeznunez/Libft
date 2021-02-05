/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 14:54:52 by snunez            #+#    #+#             */
/*   Updated: 2021/01/24 18:40:31 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "ft_strnstr.c"

int	main()
{
	char	cad[] = "paquite eres paquete un paquete";
	char	cad2[] = "paque";

	printf("%s\n", ft_strnstr(cad, cad2, 7));
	printf("%s\n", strnstr(cad, cad2, 7));
}
