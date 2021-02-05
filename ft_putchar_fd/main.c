/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 17:04:16 by snunez            #+#    #+#             */
/*   Updated: 2021/02/03 17:29:27 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "ft_putchar_fd.c"

int		main()
{
	int	file;

	file = open("prueba.txt", O_WRONLY | O_APPEND);
	printf("%d\n", file);
	ft_putchar_fd('x', file);
}
