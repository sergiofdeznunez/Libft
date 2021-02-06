/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 09:35:48 by snunez            #+#    #+#             */
/*   Updated: 2021/02/05 15:13:04 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_atoi.c"

int	main()
{
	char	cad[] ="j         -12i34";

	printf("%d\n", ft_atoi(cad));
	printf("%d\n", atoi(cad));
}
