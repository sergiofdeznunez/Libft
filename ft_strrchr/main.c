/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 13:42:24 by snunez            #+#    #+#             */
/*   Updated: 2021/01/24 13:59:20 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strrchr.c"

int	main()
{
	char	cad[] = "abcfdefghi";

	printf("%s\n", ft_strrchr(cad, '\0'));
	printf("%s\n", strrchr(cad, '\0'));
}
