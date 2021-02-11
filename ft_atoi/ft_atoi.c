/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 09:29:36 by snunez            #+#    #+#             */
/*   Updated: 2021/02/11 16:49:39 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iswhite(char c)
{
	if ((c == ' ') || (c == '\f') || (c == '\n'))
		return (1);
	if ((c == '\r') || (c == '\t') || (c == '\v'))
		return (1);
	return (0);
}

int		ft_sacarnb(const char *str, int i, int signo)
{
	int		base;
	int		num;
	char	*aux;

	aux = (char *)str;
	while (*(aux + i) == '0')
		i++;
	while (*(aux + i) >= '0' && *(aux + i) <= '9')
		i++;
	i--;
	num = 0;
	base = 1;
	while (i >= 0 && *(aux + i) >= '0' && *(aux + i) <= '9')
	{
		num = num + (*(aux + i) - '0') * base;
		base = base * 10;
		i--;
	}
	return (num * signo);
}

int		ft_atoi(const char *s)
{
	int		i;
	int		signo;
	char	*aux;

	aux = (char *)s;
	i = 0;
	signo = 1;
	while (ft_iswhite(*(aux + i)) && *(aux + i))
		i++;
	if (*(aux + i) == '\0')
		return (0);
	if (*(aux + i) == '+' || *(aux + i) == '-')
	{
		if (*(aux + i) == '-')
			signo = signo * (-1);
		i++;
	}
	return (ft_sacarnb(s, i, signo));
}
