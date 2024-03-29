/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <snunez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 17:16:27 by snunez            #+#    #+#             */
/*   Updated: 2022/02/07 11:57:47 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	error(char *str)
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

void	ft_putnbr_base(int nbr, char *base)
{
	if (error(base))
		return ;
	else if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr_base((nbr / (int)ft_strlen(base) * -1), base);
		ft_putnbr_base((nbr % (int)ft_strlen(base) * -1), base);
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr_base(nbr * (-1), base);
	}
	else if (nbr >= (int)ft_strlen(base))
	{
		ft_putnbr_base(nbr / (int)ft_strlen(base), base);
		ft_putnbr_base(nbr % (int)ft_strlen(base), base);
	}
	else
		ft_putchar(base[nbr]);
}
