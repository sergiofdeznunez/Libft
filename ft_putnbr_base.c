/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <snunez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 17:16:27 by snunez            #+#    #+#             */
/*   Updated: 2022/01/31 12:14:21 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		error(char *str)
{
	int i;
	int j;

	if (str_len(str) < 2)
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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (error(base))
		return ;
	else if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr_base((nbr / str_len(base) * -1), base);
		ft_putnbr_base((nbr % str_len(base) * -1), base);
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr_base(nbr * (-1), base);
	}
	else if (nbr >= str_len(base))
	{
		ft_putnbr_base(nbr / str_len(base), base);
		ft_putnbr_base(nbr % str_len(base), base);
	}
	else
		ft_putchar(base[nbr]);
}