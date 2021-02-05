/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 18:18:28 by snunez            #+#    #+#             */
/*   Updated: 2021/01/24 13:00:16 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "ft_strlcat.c"

int	main()
{
	char	cad[20] = "hola ";
	char	cad2[] = "que tal bicho";
	
	printf("%zu\n", ft_strlcat(cad, cad2, 20));
	//printf("%zu\n", strlcat(cad, cad2, 20));
	puts(cad);
}
