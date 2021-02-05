/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 12:46:46 by snunez            #+#    #+#             */
/*   Updated: 2021/01/28 13:14:46 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strjoin.c"

int		main()
{
	char	cad1[] = "eres una rata";
	char	cad2[] = "y bien gorda";
	char	*newcad = ft_strjoin(cad1,cad2);

	printf("%s\n", newcad);
	free(newcad);
}
