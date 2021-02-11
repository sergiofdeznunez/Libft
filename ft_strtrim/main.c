/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 13:15:45 by snunez            #+#    #+#             */
/*   Updated: 2021/02/08 11:44:44 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int		main()
{
	char	cad[] = "oaoaooaoaholu oa,";
	char	*sep = " ";
	char	*new;
	
	new = ft_strtrim(cad,sep);
	printf("%s\n", new);
	free(new);
}
