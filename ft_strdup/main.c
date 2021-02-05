/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 09:41:21 by snunez            #+#    #+#             */
/*   Updated: 2021/01/27 09:50:14 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "ft_strdup.c"
#include <stdio.h>

int		main()
{
	char	cad[] = "me duele la muela";
	char	*replic;

	replic = ft_strdup(cad);
	printf("%s\n", replic);
	free(replic);
} 
