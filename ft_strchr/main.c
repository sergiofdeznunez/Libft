/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 13:10:41 by snunez            #+#    #+#             */
/*   Updated: 2021/01/24 13:41:32 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strchr.c"

int	main()
{
	char	cad[] = "hola que twal";

	printf("%s\n", ft_strchr(cad, '\0'));
	printf("%s\n", ft_strchr(cad, '\0'));
}
