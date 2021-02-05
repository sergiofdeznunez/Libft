/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 13:15:45 by snunez            #+#    #+#             */
/*   Updated: 2021/01/30 13:59:22 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_strtrim.c"

int		main()
{
	char	cad[] = "oaoaooaoaholu oa,";
	char	sep[] = "fofa, ";
	char	*new;
	
	new = ft_strtrim(cad,sep);
	printf("%s\n", new);
	free(new);
}
