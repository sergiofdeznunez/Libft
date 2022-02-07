/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_long.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <snunez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 17:16:27 by snunez            #+#    #+#             */
/*   Updated: 2022/02/07 11:58:20 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_long(char c)
{
	write(1, &c, 1);
}

int	error_long(char *str)
{
	int	i;
	int	j;

	if (ft_strlen(str) < 2)
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == '+') || (str[i] == '-'))
			return (1);
		j = i - 1;
		while (j >= 0)
		{
			if (str[i] == str[j])
				return (1);
			j--;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base_long(size_t nbr, char *base)
{
	if (error_long(base))
		return ;
	else if (nbr >= ft_strlen(base))
	{
		ft_putnbr_base_long(nbr / ft_strlen(base), base);
		ft_putnbr_base_long(nbr % ft_strlen(base), base);
	}
	else
		ft_putchar_long(base[nbr]);
}
