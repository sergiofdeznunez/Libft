/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 18:18:28 by snunez            #+#    #+#             */
/*   Updated: 2021/02/10 11:41:15 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main()
{
	char	cad[15];
	char	cadena[15];
	char	cad2[] = "lorem ipsum";
	
	printf("%zu\n", ft_strlcat(cad, cad2, 15));
	printf("%s\n", cad);
	printf("%zu\n", strlcat(cadena, cad2, 15));
	printf("%s\n", cadena);
}
